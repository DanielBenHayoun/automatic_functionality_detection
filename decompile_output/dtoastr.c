
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * dtoastr(byte *param_1,ulong param_2,uint param_3,uint param_4)

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
  uint uVar10;
  long lVar11;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  float10 in_ST0;
  float10 fVar23;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar24;
  float extraout_XMM0_Da;
  float fVar25;
  float extraout_XMM0_Da_00;
  double dVar26;
  double extraout_XMM0_Qa;
  undefined in_XMM0 [16];
  undefined2 uStack283;
  long lStack272;
  ulong uStack256;
  ulong uStack248;
  byte *pbStack240;
  undefined *puStack232;
  ulong uStack224;
  undefined *puStack216;
  double dStack208;
  uint uStack200;
  float fStack196;
  undefined2 uStack192;
  undefined2 uStack179;
  ulong uStack168;
  ulong uStack152;
  ulong uStack144;
  byte *pbStack136;
  undefined *puStack128;
  ulong uStack120;
  undefined *puStack112;
  double dStack104;
  uint uStack92;
  undefined2 uStack75;
  ulong uStack64;
  
  bVar22 = 0;
  dStack104 = SUB168(in_XMM0,0);
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  dVar26 = dStack104;
  if (dStack104 < 0.00000000) {
    dVar26 = (double)((ulong)dStack104 ^ _UNK_0010c7f0);
  }
  puVar1 = &uStack75 + (ulong)(param_3 & 1) + 1;
  uStack75 = 0x2d25;
  uStack152 = 1;
  puVar8 = puVar1 + (param_3 >> 1 & 1);
  *puVar1 = 0x2b;
  *puVar8 = 0x20;
  puVar8[param_3 >> 2 & 1] = 0x30;
  puVar3 = (undefined2 *)(puVar8 + (param_3 >> 2 & 1) + (param_3 >> 3 & 1));
  *puVar3 = 0x2e2a;
  *(undefined *)(puVar3 + 1) = 0x2a;
  *(undefined *)(puVar3 + 2) = 0;
  *(char *)((long)puVar3 + 3) = (-((param_3 & 0x10) == 0) & 0x20U) + 0x47;
  if (_UNK_0010c800 <= dVar26) {
    uStack152 = 0xf;
  }
  while( true ) {
    puStack128 = &UNK_001057dc;
    pbStack240 = param_1;
    uStack120 = uStack152;
    uVar4 = func_0x001017c0(dStack104,param_1,param_2,1,0xffffffffffffffff,&uStack75,(ulong)param_4)
    ;
    uVar2 = (uint)uVar4;
    uVar9 = (uint)puStack112;
    if (((int)uVar2 < 0) || (0x10 < (int)uStack152)) break;
    if ((ulong)(long)(int)uVar2 < param_2) {
      puStack112 = &UNK_001057fd;
      pbStack240 = param_1;
      uStack92 = uVar2;
      func_0x00101850(param_1,0);
      uVar4 = (ulong)uStack92;
      if (extraout_XMM0_Qa == dStack104) break;
    }
    uStack152 = (ulong)((int)uStack152 + 1);
  }
  uStack248 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uStack248 == 0) {
    return (undefined *)uVar4;
  }
  puStack112 = &UNK_00105846;
  func_0x001018e0();
  puStack112 = (undefined *)0xffffffffffffffff;
  dStack208 = (double)extraout_XMM0_Da;
  uStack168 = *(ulong *)(in_FS_OFFSET + 0x28);
  fVar25 = extraout_XMM0_Da;
  if (extraout_XMM0_Da < 0.00000000) {
    fVar25 = (float)((uint)extraout_XMM0_Da ^ _UNK_0010c810);
  }
  puVar1 = &uStack179 + (ulong)((uint)extraout_RDX & 1) + 1;
  uStack179 = 0x2d25;
  puVar8 = puVar1 + ((uint)((extraout_RDX & 0xffffffff) >> 1) & 1);
  uStack144 = param_2;
  pbStack136 = param_1;
  puStack128 = &uStack75;
  uStack120 = (ulong)param_4;
  *puVar1 = 0x2b;
  *puVar8 = 0x20;
  puVar8[(uint)((extraout_RDX & 0xffffffff) >> 2) & 1] = 0x30;
  puVar3 = (undefined2 *)
           (puVar8 + ((uint)((extraout_RDX & 0xffffffff) >> 2) & 1) +
           ((uint)((extraout_RDX & 0xffffffff) >> 3) & 1));
  *puVar3 = 0x2e2a;
  *(undefined *)(puVar3 + 1) = 0x2a;
  *(undefined *)(puVar3 + 2) = 0;
  *(char *)((long)puVar3 + 3) = (-((extraout_RDX & 0x10) == 0) & 0x20U) + 0x47;
  uStack256 = (ulong)(_UNK_0010c820 <= fVar25) * 5 + 1;
  fStack196 = extraout_XMM0_Da;
  while( true ) {
    puStack232 = &UNK_00105954;
    pbVar16 = pbStack240;
    uStack224 = uStack256;
    uVar4 = func_0x001017c0(dStack208,pbStack240,uStack248,1,0xffffffffffffffff,&uStack179,
                            (ulong)uVar9);
    uVar2 = (uint)uVar4;
    uVar10 = (uint)puStack216;
    if (((int)uVar2 < 0) || (8 < (int)uStack256)) break;
    if ((ulong)(long)(int)uVar2 < uStack248) {
      puStack216 = &UNK_00105975;
      pbVar16 = pbStack240;
      uStack200 = uVar2;
      func_0x00101970(pbStack240,0);
      uVar4 = (ulong)uStack200;
      if (extraout_XMM0_Da_00 == fStack196) break;
    }
    uStack256 = (ulong)((int)uStack256 + 1);
  }
  uVar15 = uStack168 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar15 == 0) {
    return (undefined *)uVar4;
  }
  puStack216 = &UNK_001059bc;
  func_0x001018e0();
  uStack224 = 0xffffffffffffffff;
  fVar23 = (float10)CONCAT28(uStack192,CONCAT44(fStack196,uStack200));
  lStack272 = *(long *)(in_FS_OFFSET + 0x28);
  if (fVar23 < (float10)0) {
    fVar23 = -fVar23;
  }
  else {
    fVar23 = (float10)CONCAT28(uStack192,CONCAT44(fStack196,uStack200));
  }
  uStack283 = 0x2d25;
  uVar4 = 1;
  puVar1 = &uStack283 + (ulong)((uint)extraout_RDX_00 & 1) + 1;
  puVar8 = puVar1 + ((uint)((extraout_RDX_00 & 0xffffffff) >> 1) & 1);
  puStack232 = &uStack179;
  puStack216 = (undefined *)(ulong)uVar9;
  *puVar1 = 0x2b;
  *puVar8 = 0x20;
  puVar8[(uint)((extraout_RDX_00 & 0xffffffff) >> 2) & 1] = 0x30;
  puVar5 = (undefined4 *)
           (puVar8 + ((uint)((extraout_RDX_00 & 0xffffffff) >> 2) & 1) +
           ((uint)((extraout_RDX_00 & 0xffffffff) >> 3) & 1));
  *puVar5 = 0x4c2a2e2a;
  *(undefined *)((long)puVar5 + 5) = 0;
  *(byte *)(puVar5 + 1) = (-((extraout_RDX_00 & 0x10) == 0) & 0x20U) + 0x47;
  fVar24 = in_ST5;
  if (_UNK_0010c830 <= fVar23) {
    uVar4 = 0x12;
  }
  while( true ) {
    pbVar13 = pbVar16;
    uVar6 = func_0x001017c0(pbVar16,uVar15,1,0xffffffffffffffff,&uStack283,(ulong)uVar10,uVar4);
    if (((int)uVar6 < 0) || (0x14 < (int)uVar4)) break;
    fVar23 = in_ST0;
    if ((ulong)(long)(int)uVar6 < uVar15) {
      pbVar13 = pbVar16;
      fVar23 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = fVar24;
      func_0x00101a90(pbVar16,0);
      uVar6 = uVar6 & 0xffffffff;
      fVar24 = in_ST5;
      if (in_ST0 == (float10)CONCAT28(uStack192,CONCAT44(fStack196,uStack200))) break;
    }
    uVar4 = (ulong)((int)uVar4 + 1);
    in_ST0 = fVar23;
  }
  if (lStack272 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)uVar6;
  }
  func_0x001018e0();
  if (pbVar13 == (byte *)0x0) {
    pcVar18 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar14 = 1;
    func_0x00101b00(&UNK_0010c840,1,0x37,stderr);
    func_0x001017e0();
    pbVar16 = (byte *)locale_charset();
    if ((*pbVar16 & 0xdf) == 0x55) {
      if (((((pbVar16[1] & 0xdf) == 0x54) && ((pbVar16[2] & 0xdf) == 0x46)) && (pbVar16[3] == 0x2d))
         && ((pbVar16[4] == 0x38 && (pbVar16[5] == 0)))) {
        puVar8 = &UNK_0010c884;
        if (*pcVar18 != '`') {
          puVar8 = &UNK_0010c888;
        }
        return puVar8;
      }
    }
    else {
      if ((((*pbVar16 & 0xdf) == 0x47) && ((pbVar16[1] & 0xdf) == 0x42)) &&
         ((pbVar16[2] == 0x31 &&
          ((((pbVar16[3] == 0x38 && (pbVar16[4] == 0x30)) && (pbVar16[5] == 0x33)) &&
           ((pbVar16[6] == 0x30 && (pbVar16[7] == 0)))))))) {
        puVar8 = &UNK_0010c88c;
        if (*pcVar18 != '`') {
          puVar8 = &UNK_0010c890;
        }
        return puVar8;
      }
    }
    puVar8 = &UNK_0010c893;
    if (iVar14 != 9) {
      puVar8 = &UNK_0010d119;
    }
    return puVar8;
  }
  lVar7 = func_0x00101930();
  if (lVar7 != 0) {
    pbVar16 = (byte *)(lVar7 + 1);
    pbVar12 = pbVar16 + -(long)pbVar13;
    bVar19 = pbVar12 < (byte *)0x6;
    bVar21 = pbVar12 == (byte *)0x6;
    if (6 < (long)pbVar12) {
      lVar11 = 7;
      pbVar12 = (byte *)(lVar7 + -6);
      pbVar17 = &UNK_0010c878;
      do {
        if (lVar11 == 0) break;
        lVar11 = lVar11 + -1;
        bVar19 = *pbVar12 < *pbVar17;
        bVar21 = *pbVar12 == *pbVar17;
        pbVar12 = pbVar12 + (ulong)bVar22 * -2 + 1;
        pbVar17 = pbVar17 + (ulong)bVar22 * -2 + 1;
      } while (bVar21);
      bVar20 = false;
      bVar19 = (!bVar19 && !bVar21) == bVar19;
      if (bVar19) {
        lVar11 = 3;
        pbVar13 = pbVar16;
        pbVar12 = &UNK_0010c880;
        do {
          if (lVar11 == 0) break;
          lVar11 = lVar11 + -1;
          bVar20 = *pbVar13 < *pbVar12;
          bVar19 = *pbVar13 == *pbVar12;
          pbVar13 = pbVar13 + (ulong)bVar22 * -2 + 1;
          pbVar12 = pbVar12 + (ulong)bVar22 * -2 + 1;
        } while (bVar19);
        pbVar13 = pbVar16;
        if ((!bVar20 && !bVar19) == bVar20) {
          pbVar13 = (byte *)(lVar7 + 4);
          program_invocation_short_name = pbVar13;
        }
      }
    }
  }
  program_invocation_name = pbVar13;
  program_name = pbVar13;
  return (undefined *)lVar7;
}

