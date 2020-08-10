
/* WARNING: Removing unreachable block (ram,0x00103148) */

undefined4 * scan_arg(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  char **ppcVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *unaff_R12;
  byte *unaff_R13;
  ulong uVar14;
  long in_FS_OFFSET;
  byte bVar15;
  char *pcStack184;
  char *pcStack176;
  long lStack168;
  byte *pbStack152;
  undefined4 *puStack144;
  byte *pbStack136;
  byte *pbStack128;
  float10 fStack120;
  float10 fStack104;
  undefined6 uStack94;
  byte *pbStack88;
  int iStack80;
  undefined4 uStack76;
  ulong uStack64;
  
  bVar15 = 0;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  pbStack128 = &UNK_00102eba;
  cVar4 = xstrtold(param_2,0,&fStack104,cl_strtold);
  if (cVar4 == '\0') {
    pbStack128 = &UNK_001031a2;
    param_2 = (byte *)quote(param_2);
    pbStack128 = &UNK_001031b8;
    uVar9 = func_0x00101640(0,&UNK_00108730,5);
    ppcVar11 = (char **)0x0;
    pbStack128 = &UNK_001031c9;
    func_0x00101840(0,0,uVar9,param_2);
    pbVar13 = (byte *)0x1;
    pbStack128 = &UNK_001031d3;
    usage();
    goto code_r0x001031d3;
  }
  fStack120 = fStack104;
  pbStack128 = &UNK_00102ed8;
  plVar6 = (long *)func_0x001018c0();
  while (((*(byte *)(*plVar6 + 1 + (ulong)*param_2 * 2) & 0x20) != 0 || (*param_2 == 0x2b))) {
    param_2 = param_2 + 1;
  }
  pbStack88 = (byte *)0x0;
  iStack80 = 0x7fffffff;
  pbStack128 = &UNK_00102f11;
  unaff_R12 = (byte *)func_0x001016a0(param_2,0x2e);
  if (unaff_R12 == (byte *)0x0) {
    pbStack128 = &UNK_00103097;
    lVar7 = func_0x001016a0(param_2,0x70);
    if (lVar7 == 0) {
      iStack80 = 0;
    }
  }
  pbStack128 = &UNK_00102f2c;
  pbVar13 = param_2;
  lVar7 = func_0x00101700(param_2,&UNK_0010806b);
  if ((param_2[lVar7] == 0) && (fStack120 * (float10)0 == (float10)0)) {
    uVar14 = 0xffffffffffffffff;
    uVar10 = 0xffffffffffffffff;
    pbVar13 = param_2;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      bVar1 = *pbVar13;
      pbVar13 = pbVar13 + (ulong)bVar15 * -2 + 1;
    } while (bVar1 != 0);
    pbVar13 = (byte *)(~uVar10 - 1);
    pbStack88 = pbVar13;
    if (unaff_R12 == (byte *)0x0) {
      uVar10 = 0;
    }
    else {
      pbStack128 = &UNK_00102f84;
      uVar10 = func_0x00101700(unaff_R12 + 1,&UNK_0010806e);
      if ((0x7fffffff < uVar10) || (iStack80 = (int)uVar10, uVar10 != 0)) {
        if (param_2 == unaff_R12) {
          uVar14 = 1;
        }
        else {
          uVar14 = (ulong)(9 < (int)(char)unaff_R12[-1] - 0x30U);
        }
      }
      pbStack88 = pbVar13 + uVar14;
    }
    pbStack128 = &UNK_00102fc4;
    unaff_R13 = (byte *)func_0x001016a0(param_2);
    if (unaff_R13 == (byte *)0x0) {
      pbStack128 = &UNK_001030d4;
      pbVar13 = param_2;
      unaff_R13 = (byte *)func_0x001016a0();
      if (unaff_R13 == (byte *)0x0) goto code_r0x00103050;
    }
    pbStack128 = &UNK_00102fe0;
    uVar14 = func_0x00101750(unaff_R13 + 1,0,10);
    if ((long)uVar14 < 0) {
      iStack80 = iStack80 - (int)uVar14;
      lVar7 = -1;
      pbVar12 = param_2;
      do {
        pbVar13 = pbVar12;
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        pbVar13 = pbVar12 + (ulong)bVar15 * -2 + 1;
        bVar1 = *pbVar12;
        pbVar12 = pbVar13;
      } while (bVar1 != 0);
      pbStack88 = unaff_R13 + -(long)param_2 + (long)(pbStack88 + lVar7 + 2);
      if (unaff_R12 == (byte *)0x0) {
        pbStack88 = pbStack88 + 1;
      }
      else {
        unaff_R12 = unaff_R12 + 1;
        if (unaff_R13 == unaff_R12) {
          pbStack88 = pbStack88 + 1;
        }
      }
      lVar7 = -uVar14;
    }
    else {
      iVar5 = iStack80;
      if ((long)uVar14 < (long)iStack80) {
        iVar5 = (int)uVar14;
      }
      lVar7 = -1;
      iStack80 = iStack80 - iVar5;
      pbVar13 = param_2;
      do {
        pbVar12 = pbVar13;
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        pbVar12 = pbVar13 + (ulong)bVar15 * -2 + 1;
        bVar1 = *pbVar13;
        pbVar13 = pbVar12;
      } while (bVar1 != 0);
      pbVar13 = (byte *)((ulong)pbVar12 & 0xffffffffffffff00 | (ulong)(unaff_R12 != (byte *)0x0));
      pbStack88 = unaff_R13 + -(long)param_2 + (long)(pbStack88 + lVar7 + 2);
      if ((unaff_R12 != (byte *)0x0 && uVar10 != 0) && (iStack80 == 0)) {
        pbStack88 = pbStack88 + -1;
      }
      if (uVar14 <= uVar10) {
        uVar10 = uVar14;
      }
      lVar7 = uVar14 - uVar10;
    }
    pbStack88 = pbStack88 + lVar7;
  }
code_r0x00103050:
  ppcVar11 = (char **)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  *param_1 = SUB104(fStack104,0);
  param_1[1] = (int)((unkuint10)fStack104 >> 0x20);
  param_1[2] = SUB164(CONCAT610(uStack94,fStack104) >> 0x40,0);
  param_1[3] = (int)((uint6)uStack94 >> 0x10);
  param_1[4] = (int)pbStack88;
  param_1[5] = (int)((ulong)pbStack88 >> 0x20);
  param_1[6] = iStack80;
  param_1[7] = uStack76;
  if (ppcVar11 == (char **)0x0) {
    return param_1;
  }
code_r0x001031d3:
  pbStack128 = &UNK_001031d8;
  func_0x00101670();
  lStack168 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar12 = pbVar13;
  pbStack152 = param_2;
  puStack144 = param_1;
  pbStack136 = unaff_R12;
  pbStack128 = unaff_R13;
  func_0x00101830();
  pcVar3 = pcStack184;
  if (*pcStack184 != '\0') {
    puVar8 = (undefined4 *)func_0x001015b0();
    uVar2 = *puVar8;
    c_strtold(pbVar13,&pcStack176);
    pbVar12 = pbVar13;
    pcVar3 = pcStack176;
    if (pcStack176 <= pcStack184) {
      *puVar8 = uVar2;
      pcVar3 = pcStack184;
    }
  }
  pcStack184 = pcVar3;
  if (ppcVar11 != (char **)0x0) {
    *ppcVar11 = pcStack184;
  }
  if (lStack168 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined4 *)0x0;
  }
  uVar9 = func_0x00101670();
  file_name = pbVar12;
  return (undefined4 *)uVar9;
}

