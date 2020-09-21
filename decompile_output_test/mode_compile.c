
undefined2 * mode_compile(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  byte *pbVar6;
  uint uVar7;
  undefined *unaff_RBP;
  undefined *puVar8;
  ulong uVar9;
  uint uVar10;
  byte in_R9B;
  undefined uVar11;
  uint uVar12;
  
  bVar1 = *param_1;
  uVar2 = (ulong)(uint)(int)(char)bVar1;
  if ((byte)(bVar1 - 0x30) < 8) {
    uVar12 = 0;
    pbVar6 = param_1;
    do {
      uVar12 = (int)uVar2 + -0x30 + uVar12 * 8;
      pbVar6 = pbVar6 + 1;
      if (0xfff < uVar12) {
        return (undefined2 *)0;
      }
      bVar1 = *pbVar6;
      uVar2 = (ulong)(uint)(int)(char)bVar1;
    } while ((byte)(bVar1 - 0x30) < 8);
    if (bVar1 != 0) {
      return (undefined2 *)0;
    }
    uVar7 = uVar12 & 0xc00 | 0x3ff;
    if (4 < (long)(pbVar6 + -(long)param_1)) {
      uVar7 = 0xfff;
    }
    puVar5 = (undefined2 *)xmalloc(0x20);
    *(undefined4 *)(puVar5 + 2) = 0xfff;
    *(uint *)(puVar5 + 4) = uVar12;
    *puVar5 = 0x13d;
    *(uint *)(puVar5 + 6) = uVar7;
    *(undefined *)((long)puVar5 + 0x11) = 0;
    return puVar5;
  }
  uVar9 = 1;
  pbVar6 = param_1;
  while (bVar1 != 0) {
    pbVar6 = pbVar6 + 1;
    uVar9 = uVar9 + ((byte)uVar2 == 0x2b || ((byte)uVar2 & 0xef) == 0x2d);
    bVar1 = *pbVar6;
    uVar2 = (ulong)bVar1;
  }
  if (SUB168(ZEXT816(0x10) * ZEXT816(uVar9) >> 0x40,0) != 0) {
    lVar3 = xalloc_die();
    goto code_r0x001026d0;
  }
  unaff_RBP = &UNK_00105ea0;
  lVar3 = xmalloc(uVar9 << 4);
  uVar9 = 0;
code_r0x001023d2:
  uVar12 = 0;
  do {
    bVar1 = *param_1;
    uVar2 = (ulong)bVar1;
    if (bVar1 == 0x61) {
      uVar12 = 0xfff;
    }
    else {
      if ((char)bVar1 < 'b') break;
      if (bVar1 == 0x6f) {
        uVar12 = uVar12 | 0x207;
      }
      else {
        if (bVar1 == 0x75) {
          uVar12 = uVar12 | 0x9c0;
        }
        else {
          if (bVar1 != 0x67) goto code_r0x00102403;
          uVar12 = uVar12 | 0x438;
        }
      }
    }
    param_1 = param_1 + 1;
  } while( true );
  if (((bVar1 != 0x2d) && (bVar1 != 0x3d)) && (bVar1 != 0x2b)) goto code_r0x00102403;
  puVar8 = (undefined *)(uVar9 * 0x10 + lVar3);
  pbVar6 = param_1;
  do {
    uVar9 = uVar9 + 1;
    bVar1 = pbVar6[1];
    uVar7 = SEXT14((char)bVar1);
    param_1 = pbVar6 + 1;
    uVar11 = (undefined)uVar2;
    if (bVar1 == 0x67) {
      uVar10 = 0x38;
code_r0x0010248c:
      *puVar8 = uVar11;
      puVar8[1] = 3;
      param_1 = pbVar6 + 2;
      uVar2 = (ulong)*param_1;
      *(uint *)(puVar8 + 4) = uVar12;
      *(uint *)(puVar8 + 8) = uVar10;
code_r0x001024a3:
      if (uVar12 != 0) {
        uVar10 = uVar10 & uVar12;
      }
    }
    else {
      if ('g' < (char)bVar1) {
        if (bVar1 == 0x6f) {
          uVar10 = 7;
        }
        else {
          uVar10 = 0x1c0;
          if (bVar1 != 0x75) goto code_r0x00102560;
        }
        goto code_r0x0010248c;
      }
      if (7 < (byte)(bVar1 - 0x30)) {
code_r0x00102560:
        uVar10 = 0;
        if ((byte)(bVar1 + 0xa8) < 0x21) {
                    /* WARNING: Could not recover jumptable at 0x00102584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*(code *)(unaff_RBP + *(int *)(unaff_RBP + (ulong)(byte)(bVar1 + 0xa8) * 4)))();
          return (undefined2 *)uVar4;
        }
        *puVar8 = uVar11;
        puVar8[1] = 1;
        uVar2 = (ulong)uVar7;
        *(uint *)(puVar8 + 4) = uVar12;
        *(undefined4 *)(puVar8 + 8) = 0;
        goto code_r0x001024a3;
      }
      uVar10 = 0;
      do {
        uVar10 = (uVar7 - 0x30) + uVar10 * 8;
        param_1 = param_1 + 1;
        if (0xfff < uVar10) goto code_r0x00102403;
        bVar1 = *param_1;
        uVar7 = SEXT14((char)bVar1);
      } while ((byte)(bVar1 - 0x30) < 8);
      if ((uVar12 != 0) || ((bVar1 != 0 && (bVar1 != 0x2c)))) goto code_r0x00102403;
      *puVar8 = uVar11;
      puVar8[1] = 1;
      uVar2 = (ulong)uVar7;
      *(undefined4 *)(puVar8 + 4) = 0xfff;
      *(uint *)(puVar8 + 8) = uVar10;
      uVar12 = 0xfff;
      uVar10 = 0xfff;
    }
    in_R9B = (byte)uVar2;
    *(uint *)(puVar8 + 0xc) = uVar10;
    puVar8 = puVar8 + 0x10;
    pbVar6 = param_1;
  } while (((in_R9B & 0xef) == 0x2d) || (in_R9B == 0x2b));
code_r0x001026d0:
  if (in_R9B != 0x2c) {
    if (in_R9B == 0) {
      *(undefined *)(lVar3 + 1 + uVar9 * 0x10) = 0;
    }
    else {
code_r0x00102403:
      func_0x001013c0(lVar3);
      lVar3 = 0;
    }
    return (undefined2 *)lVar3;
  }
  param_1 = param_1 + 1;
  goto code_r0x001023d2;
}

