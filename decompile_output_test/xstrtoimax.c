
ulong xstrtoimax(byte *param_1,byte **param_2,uint param_3,long *param_4,long param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  byte *pbVar11;
  long extraout_RDX;
  byte **unaff_RBX;
  uint *puVar12;
  long unaff_RBP;
  byte **ppbVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  ulong unaff_R12;
  byte bVar18;
  int *unaff_R13;
  long in_FS_OFFSET;
  uint uStack140;
  long lStack136;
  byte **ppbStack120;
  long lStack112;
  ulong uStack104;
  int *piStack96;
  byte *pbStack80;
  byte *pbStack72;
  ulong uStack64;
  
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (0x24 < param_3) {
    ppbVar13 = (byte **)&UNK_00106940;
    puVar12 = (uint *)&UNK_00106950;
    piStack96 = (int *)&UNK_0010549e;
    func_0x00101520(&UNK_00106950,&UNK_00106940,0x54,__PRETTY_FUNCTION___4162);
    goto code_r0x0010549e;
  }
  unaff_RBX = param_2;
  if (param_2 == (byte **)0x0) {
    unaff_RBX = &pbStack72;
  }
  piStack96 = (int *)&UNK_00104e36;
  unaff_R13 = (int *)func_0x00101400();
  *unaff_R13 = 0;
  piStack96 = (int *)&UNK_00104e4e;
  ppbVar13 = unaff_RBX;
  unaff_RBP = func_0x00101450(param_1,unaff_RBX,(ulong)param_3,0);
  pbVar11 = *unaff_RBX;
  if (pbVar11 == param_1) {
    if (param_5 == 0) {
      unaff_R12 = 4;
    }
    else {
      bVar18 = *pbVar11;
      unaff_R13 = (int *)(ulong)bVar18;
      unaff_R12 = 4;
      pbStack80 = pbVar11;
      if (bVar18 != 0) {
        ppbVar13 = (byte **)(ulong)(uint)(int)(char)bVar18;
        piStack96 = (int *)&UNK_00104ee1;
        lVar7 = func_0x001014e0(param_5);
        if (lVar7 != 0) {
          lVar7 = 1;
          unaff_R12 = 0;
          pbVar11 = pbStack80;
          goto code_r0x00104ef3;
        }
      }
    }
    goto code_r0x00104e79;
  }
  if (*unaff_R13 == 0) {
    unaff_R12 = 0;
  }
  else {
    unaff_R12 = 4;
    if (*unaff_R13 != 0x22) goto code_r0x00104e79;
    unaff_R12 = 1;
  }
  if ((param_5 == 0) || (unaff_R13 = (int *)(ulong)*pbVar11, lVar7 = unaff_RBP, *pbVar11 == 0))
  goto code_r0x00104e76;
code_r0x00104ef3:
  ppbVar13 = (byte **)(ulong)(uint)(int)(char)unaff_R13;
  piStack96 = (int *)&UNK_00104f04;
  pbStack80 = pbVar11;
  lVar4 = func_0x001014e0(param_5);
  uVar17 = (uint)unaff_R12;
  unaff_RBP = lVar7;
  if (lVar4 == 0) {
code_r0x00104f68:
    *param_4 = lVar7;
    unaff_R12 = (ulong)(uVar17 | 2);
    goto code_r0x00104e79;
  }
  uVar2 = (int)unaff_R13 - 0x45;
  if (((byte)uVar2 < 0x30) && ((0x814400308945U >> ((ulong)uVar2 & 0x1f) & 1) != 0)) {
    piStack96 = (int *)&UNK_00104f38;
    lVar4 = func_0x001014e0();
    if (lVar4 == 0) goto code_r0x00104f78;
    bVar18 = pbStack80[1];
    if (bVar18 == 0x44) {
code_r0x00104f56:
      iVar14 = 2;
      iVar3 = 1000;
    }
    else {
      if (bVar18 != 0x69) {
        if (bVar18 != 0x42) goto code_r0x00104f78;
        goto code_r0x00104f56;
      }
      iVar3 = 0x400;
      iVar14 = (uint)(pbStack80[2] == 0x42) + 1 + (uint)(pbStack80[2] == 0x42);
    }
  }
  else {
code_r0x00104f78:
    iVar14 = 1;
    iVar3 = 0x400;
  }
  bVar18 = (char)unaff_R13 + 0xbe;
  ppbVar13 = (byte **)&UNK_00106978;
  unaff_R13 = (int *)(ulong)bVar18;
  switch(bVar18) {
  case 0:
    if (lVar7 < -0x20000000000000) {
code_r0x00105360:
      unaff_R12 = 1;
      unaff_RBP = -0x8000000000000000;
    }
    else {
      if (lVar7 < 0x20000000000000) {
        unaff_RBP = lVar7 << 10;
      }
      else {
code_r0x00105420:
        unaff_R12 = 1;
        unaff_RBP = 0x7fffffffffffffff;
      }
    }
    break;
  default:
    goto code_r0x00104f68;
  case 3:
    lVar4 = (long)iVar3;
    iVar16 = 6;
    uVar2 = 0;
    do {
      if (lVar7 < SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) /
                         SEXT816(lVar4),0)) {
        uVar2 = 1;
        lVar7 = -0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar4),0)
            < lVar7) {
          uVar2 = 1;
          lVar7 = 0x7fffffffffffffff;
        }
        else {
          lVar7 = lVar7 * lVar4;
        }
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto code_r0x001051f0;
  case 5:
  case 0x25:
    lVar4 = (long)iVar3;
    iVar16 = 3;
    uVar2 = 0;
    do {
      if (lVar7 < SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) /
                         SEXT816(lVar4),0)) {
        uVar2 = 1;
        lVar7 = -0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar4),0)
            < lVar7) {
          uVar2 = 1;
          lVar7 = 0x7fffffffffffffff;
        }
        else {
          lVar7 = lVar7 * lVar4;
        }
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto code_r0x001051f0;
  case 9:
  case 0x29:
    ppbVar13 = (byte **)(long)iVar3;
    if (lVar7 < SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) /
                       SEXT816((long)ppbVar13),0)) goto code_r0x00105360;
    if (0x7fffffffffffffff / (long)ppbVar13 < lVar7) goto code_r0x00105420;
    unaff_RBP = lVar7 * (long)ppbVar13;
    break;
  case 0xb:
  case 0x2b:
    ppbVar13 = (byte **)(long)iVar3;
    lVar4 = SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) /
                   SEXT816((long)ppbVar13),0);
    if (lVar7 < lVar4) {
code_r0x00105465:
      uVar2 = 1;
      unaff_RBP = -0x8000000000000000;
    }
    else {
      unaff_RBP = 0x7fffffffffffffff;
      lVar5 = SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) /
                     SEXT816((long)ppbVar13),0);
      if (lVar5 < lVar7) {
code_r0x00105472:
        uVar2 = 1;
      }
      else {
        lVar7 = lVar7 * (long)ppbVar13;
        if (lVar7 < lVar4) goto code_r0x00105465;
        if (lVar5 < lVar7) goto code_r0x00105472;
        unaff_RBP = lVar7 * (long)ppbVar13;
        uVar2 = 0;
      }
    }
    unaff_R12 = (ulong)(uVar17 | uVar2);
    break;
  case 0xe:
    lVar4 = (long)iVar3;
    iVar16 = 5;
    uVar2 = 0;
    do {
      if (lVar7 < SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) /
                         SEXT816(lVar4),0)) {
        uVar2 = 1;
        lVar7 = -0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar4),0)
            < lVar7) {
          uVar2 = 1;
          lVar7 = 0x7fffffffffffffff;
        }
        else {
          lVar7 = lVar7 * lVar4;
        }
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto code_r0x001051f0;
  case 0x12:
  case 0x32:
    lVar4 = (long)iVar3;
    iVar16 = 4;
    uVar2 = 0;
    do {
      if (lVar7 < SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) /
                         SEXT816(lVar4),0)) {
        uVar2 = 1;
        lVar7 = -0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar4),0)
            < lVar7) {
          uVar2 = 1;
          lVar7 = 0x7fffffffffffffff;
        }
        else {
          lVar7 = lVar7 * lVar4;
        }
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto code_r0x001051f0;
  case 0x17:
    lVar4 = (long)iVar3;
    iVar16 = 8;
    uVar2 = 0;
    do {
      if (lVar7 < SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) /
                         SEXT816(lVar4),0)) {
        uVar2 = 1;
        lVar7 = -0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar4),0)
            < lVar7) {
          uVar2 = 1;
          lVar7 = 0x7fffffffffffffff;
        }
        else {
          lVar7 = lVar7 * lVar4;
        }
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto code_r0x001051f0;
  case 0x18:
    lVar4 = (long)iVar3;
    iVar16 = 7;
    uVar2 = 0;
    do {
      if (lVar7 < SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) /
                         SEXT816(lVar4),0)) {
        uVar2 = 1;
        lVar7 = -0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar4),0)
            < lVar7) {
          uVar2 = 1;
          lVar7 = 0x7fffffffffffffff;
        }
        else {
          lVar7 = lVar7 * lVar4;
        }
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
code_r0x001051f0:
    ppbVar13 = (byte **)(long)iVar3;
    unaff_R12 = (ulong)(uVar17 | uVar2);
    unaff_RBP = lVar7;
    break;
  case 0x20:
    if (lVar7 < -0x40000000000000) goto code_r0x00105360;
    if (0x3fffffffffffff < lVar7) goto code_r0x00105420;
    unaff_RBP = lVar7 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if (lVar7 < -0x4000000000000000) goto code_r0x00105360;
    if (0x3fffffffffffffff < lVar7) goto code_r0x00105420;
    unaff_RBP = lVar7 * 2;
  }
  *unaff_RBX = pbStack80 + iVar14;
  if (pbStack80[iVar14] != 0) {
    unaff_R12 = (ulong)((uint)unaff_R12 | 2);
  }
code_r0x00104e76:
  *param_4 = unaff_RBP;
code_r0x00104e79:
  puVar12 = (uint *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (puVar12 == (uint *)0x0) {
    return unaff_R12;
  }
code_r0x0010549e:
  piStack96 = (int *)&UNK_001054a3;
  func_0x001014b0();
  lStack136 = *(long *)(in_FS_OFFSET + 0x28);
  if (puVar12 == (uint *)0x0) {
    puVar12 = &uStack140;
  }
  puVar15 = puVar12;
  ppbStack120 = unaff_RBX;
  lStack112 = unaff_RBP;
  uStack104 = unaff_R12;
  piStack96 = unaff_R13;
  uVar6 = func_0x001014d0();
  if ((0xfffffffffffffffd < uVar6) && (extraout_RDX != 0)) {
    puVar15 = (uint *)0x0;
    cVar1 = hard_locale();
    if (cVar1 == '\0') {
      uVar6 = 1;
      *puVar12 = (uint)*(byte *)ppbVar13;
    }
  }
  if (lStack136 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
  func_0x001014b0();
  lVar7 = func_0x00101430();
  uVar17 = *puVar15;
  uVar8 = rpl_fclose(puVar15);
  if ((uVar17 & 0x20) != 0) {
    if ((int)uVar8 == 0) {
      puVar9 = (undefined4 *)func_0x00101400();
      *puVar9 = 0;
      return 0xffffffff;
    }
    return 0xffffffff;
  }
  if (((int)uVar8 != 0) && (uVar8 = 0xffffffff, lVar7 == 0)) {
    piVar10 = (int *)func_0x00101400();
    return (ulong)-(uint)(*piVar10 != 9);
  }
  return uVar8;
}

