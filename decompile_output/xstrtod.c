
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong xstrtod(uint *param_1,uint **param_2,double *param_3,code *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  uint uVar7;
  long extraout_RDX;
  uint **ppuVar8;
  int *piVar9;
  uint *puVar10;
  char **ppcVar11;
  uint *puVar12;
  char **ppcVar13;
  char **ppcVar14;
  int iVar15;
  uint *puVar16;
  byte *pbVar17;
  long in_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  double dVar21;
  char *pcStack168;
  long lStack160;
  uint *puStack144;
  ulong uStack136;
  long lStack128;
  int *piStack120;
  uint uStack108;
  long lStack104;
  uint **ppuStack88;
  uint *puStack80;
  int *piStack72;
  double *pdStack64;
  uint *puStack56;
  long lStack48;
  
  bVar20 = 0;
  ppuVar8 = &puStack56;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  pdStack64 = (double *)&UNK_0010578d;
  piStack72 = (int *)func_0x00101970();
  *piStack72 = 0;
  pdStack64 = (double *)&UNK_0010579f;
  puStack144 = param_1;
  dVar21 = (double)(*param_4)();
  if (puStack56 == param_1) {
    uVar4 = 0;
code_r0x001057c6:
    if (param_2 != (uint **)0x0) {
code_r0x001057cb:
      *param_2 = puStack56;
    }
  }
  else {
    if (param_2 != (uint **)0x0) {
      uVar4 = 1;
      if (dVar21 != _UNK_00106878) {
code_r0x001057be:
        uVar4 = (ulong)(*piStack72 != 0x22);
        goto code_r0x001057c6;
      }
      goto code_r0x001057cb;
    }
    uVar4 = 0;
    if (*(char *)puStack56 == '\0') {
      if (dVar21 != _UNK_00106878) goto code_r0x001057be;
      uVar4 = 1;
    }
  }
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = dVar21;
  if (lStack48 == lVar5) {
    return uVar4;
  }
  pdStack64 = (double *)&UNK_00105821;
  func_0x00101a50();
  lStack104 = *(long *)(in_FS_OFFSET + 0x28);
  if (puStack144 == (uint *)0x0) {
    puStack144 = &uStack108;
  }
  piStack120 = (int *)&UNK_00105867;
  piVar9 = (int *)ppuVar8;
  puVar16 = puStack144;
  ppuStack88 = param_2;
  puStack80 = param_1;
  pdStack64 = param_3;
  uStack136 = func_0x00101a70();
  if ((0xfffffffffffffffd < uStack136) && (extraout_RDX != 0)) {
    puVar16 = (uint *)0x0;
    piStack120 = (int *)&UNK_0010587c;
    cVar1 = hard_locale();
    if (cVar1 == '\0') {
      uStack136 = 1;
      *puStack144 = (uint)*(byte *)ppuVar8;
    }
  }
  if (lStack104 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uStack136;
  }
  piStack120 = (int *)&UNK_001058b3;
  func_0x00101a50();
  iVar15 = (int)puVar16;
  uVar4 = 0;
  iVar2 = 0x3090a4;
  ppcVar11 = &pcStack168;
  ppcVar13 = &pcStack168;
  ppcVar14 = &pcStack168;
  lStack160 = *(long *)(in_FS_OFFSET + 0x28);
  lStack128 = extraout_RDX;
  piStack120 = (int *)ppuVar8;
  if ((int)*(char *)puVar16 - 0x30U < 10) {
    lVar5 = func_0x00101b40();
    iVar2 = (int)lVar5;
    ppcVar14 = ppcVar11;
    if ((*pcStack168 == '\0') && (lVar5 < 0x41)) {
code_r0x00105929:
      *piVar9 = iVar2;
      uVar4 = (ulong)(uint)(iVar2 >> 0x1f);
      goto code_r0x00105930;
    }
  }
  else {
    do {
      puVar10 = puVar16;
      iVar15 = iVar2;
      iVar3 = func_0x00101b10();
      if (iVar3 == 0) {
        iVar2 = *(int *)(numname_table + uVar4 * 0xc);
        ppcVar14 = (char **)puVar10;
        goto code_r0x00105929;
      }
      uVar7 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar7;
      iVar2 = iVar2 + 0xc;
    } while (uVar7 != 0x23);
    iVar3 = func_0x00101c90();
    iVar2 = func_0x00101ce0();
    bVar18 = false;
    bVar19 = iVar3 == 0;
    if (0 < iVar3) {
      lVar5 = 5;
      puVar12 = puVar16;
      pbVar17 = &UNK_00107180;
      do {
        iVar15 = (int)pbVar17;
        puVar10 = puVar12;
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        iVar15 = (int)(pbVar17 + (ulong)bVar20 * -2 + 1);
        puVar10 = (uint *)((long)puVar12 + (ulong)bVar20 * -2 + 1);
        bVar18 = *(byte *)puVar12 < *pbVar17;
        bVar19 = *(byte *)puVar12 == *pbVar17;
        puVar12 = puVar10;
        pbVar17 = pbVar17 + (ulong)bVar20 * -2 + 1;
      } while (bVar19);
      if ((!bVar18 && !bVar19) == bVar18) {
        iVar15 = (int)((long)puVar16 + 5);
        lVar5 = func_0x00101b40((long)puVar16 + 5,&pcStack168,10);
        if (((*pcStack168 == '\0') && (-1 < lVar5)) && (lVar5 <= iVar2 - iVar3)) {
          iVar2 = (int)lVar5 + iVar3;
          goto code_r0x00105929;
        }
        goto code_r0x0010596c;
      }
    }
    bVar18 = false;
    bVar19 = iVar2 == 0;
    ppcVar14 = (char **)puVar10;
    if (0 < iVar2) {
      lVar5 = 5;
      puVar10 = puVar16;
      pbVar17 = &UNK_00107186;
      do {
        iVar15 = (int)pbVar17;
        ppcVar14 = (char **)puVar10;
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        iVar15 = (int)(pbVar17 + (ulong)bVar20 * -2 + 1);
        ppcVar14 = (char **)((long)puVar10 + (ulong)bVar20 * -2 + 1);
        bVar18 = *(byte *)puVar10 < *pbVar17;
        bVar19 = *(byte *)puVar10 == *pbVar17;
        puVar10 = (uint *)ppcVar14;
        pbVar17 = pbVar17 + (ulong)bVar20 * -2 + 1;
      } while (bVar19);
      if ((!bVar18 && !bVar19) == bVar18) {
        iVar15 = (int)((long)puVar16 + 5);
        lVar5 = func_0x00101b40((long)puVar16 + 5,&pcStack168,10);
        ppcVar14 = ppcVar13;
        if (((*pcStack168 == '\0') && (iVar3 - iVar2 <= lVar5)) && (lVar5 < 1)) {
          iVar2 = (int)lVar5 + iVar2;
          goto code_r0x00105929;
        }
      }
    }
  }
code_r0x0010596c:
  *piVar9 = -1;
  uVar4 = 0xffffffff;
code_r0x00105930:
  if (lStack160 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
  func_0x00101a50();
  uVar4 = 0;
  puVar6 = numname_table;
  do {
    if (*(int *)puVar6 == iVar15) {
      func_0x001019a0(ppcVar14,uVar4 * 0xc + 0x3090a4,uVar4 * 3);
      return 0;
    }
    uVar7 = (int)uVar4 + 1;
    uVar4 = (ulong)uVar7;
    puVar6 = (undefined1 *)((int *)puVar6 + 3);
  } while (uVar7 != 0x23);
  iVar2 = func_0x00101c90();
  iVar3 = func_0x00101ce0();
  if ((iVar15 < iVar2) || (iVar3 < iVar15)) {
    uVar4 = 0xffffffff;
  }
  else {
    if ((iVar3 - iVar2 >> 1) + iVar2 < iVar15) {
      *(uint *)ppcVar14 = 0x414d5452;
      *(undefined2 *)((uint *)ppcVar14 + 1) = 0x58;
      iVar2 = iVar3;
    }
    else {
      *(uint *)ppcVar14 = 0x494d5452;
      *(undefined2 *)((uint *)ppcVar14 + 1) = 0x4e;
    }
    uVar7 = iVar15 - iVar2;
    uVar4 = (ulong)uVar7;
    if (uVar7 != 0) {
      func_0x00101d40((long)ppcVar14 + 5,1,0xffffffffffffffff,&UNK_0010718c,(ulong)uVar7);
      return 0;
    }
  }
  return uVar4;
}

