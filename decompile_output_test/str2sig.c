
ulong str2sig(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  char **ppcVar8;
  undefined4 *puVar9;
  char **ppcVar10;
  char **ppcVar11;
  int iVar12;
  byte *pbVar13;
  long in_FS_OFFSET;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  char *pcStack56;
  long lStack48;
  
  iVar12 = (int)param_1;
  bVar16 = 0;
  uVar4 = 0;
  iVar1 = 0x3090a4;
  ppcVar8 = &pcStack56;
  ppcVar10 = &pcStack56;
  ppcVar11 = &pcStack56;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)*(char *)param_1 - 0x30U < 10) {
    lVar3 = func_0x00101b40(param_1,&pcStack56,10);
    iVar1 = (int)lVar3;
    ppcVar11 = ppcVar8;
    if ((*pcStack56 == '\0') && (lVar3 < 0x41)) {
code_r0x00105929:
      *param_2 = iVar1;
      uVar4 = (ulong)(uint)(iVar1 >> 0x1f);
      goto code_r0x00105930;
    }
  }
  else {
    do {
      puVar7 = param_1;
      iVar12 = iVar1;
      iVar2 = func_0x00101b10();
      if (iVar2 == 0) {
        iVar1 = *(int *)(numname_table + uVar4 * 0xc);
        ppcVar11 = (char **)puVar7;
        goto code_r0x00105929;
      }
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar6;
      iVar1 = iVar1 + 0xc;
    } while (uVar6 != 0x23);
    iVar2 = func_0x00101c90();
    iVar1 = func_0x00101ce0();
    bVar14 = false;
    bVar15 = iVar2 == 0;
    if (0 < iVar2) {
      lVar3 = 5;
      puVar9 = param_1;
      pbVar13 = &UNK_00107180;
      do {
        iVar12 = (int)pbVar13;
        puVar7 = puVar9;
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        iVar12 = (int)(pbVar13 + (ulong)bVar16 * -2 + 1);
        puVar7 = (undefined4 *)((long)puVar9 + (ulong)bVar16 * -2 + 1);
        bVar14 = *(byte *)puVar9 < *pbVar13;
        bVar15 = *(byte *)puVar9 == *pbVar13;
        puVar9 = puVar7;
        pbVar13 = pbVar13 + (ulong)bVar16 * -2 + 1;
      } while (bVar15);
      if ((!bVar14 && !bVar15) == bVar14) {
        iVar12 = (int)((long)param_1 + 5);
        lVar3 = func_0x00101b40((long)param_1 + 5,&pcStack56,10);
        if (((*pcStack56 == '\0') && (-1 < lVar3)) && (lVar3 <= iVar1 - iVar2)) {
          iVar1 = (int)lVar3 + iVar2;
          goto code_r0x00105929;
        }
        goto code_r0x0010596c;
      }
    }
    bVar14 = false;
    bVar15 = iVar1 == 0;
    ppcVar11 = (char **)puVar7;
    if (0 < iVar1) {
      lVar3 = 5;
      puVar7 = param_1;
      pbVar13 = &UNK_00107186;
      do {
        iVar12 = (int)pbVar13;
        ppcVar11 = (char **)puVar7;
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        iVar12 = (int)(pbVar13 + (ulong)bVar16 * -2 + 1);
        ppcVar11 = (char **)((long)puVar7 + (ulong)bVar16 * -2 + 1);
        bVar14 = *(byte *)puVar7 < *pbVar13;
        bVar15 = *(byte *)puVar7 == *pbVar13;
        puVar7 = (undefined4 *)ppcVar11;
        pbVar13 = pbVar13 + (ulong)bVar16 * -2 + 1;
      } while (bVar15);
      if ((!bVar14 && !bVar15) == bVar14) {
        iVar12 = (int)((long)param_1 + 5);
        lVar3 = func_0x00101b40((long)param_1 + 5,&pcStack56,10);
        ppcVar11 = ppcVar10;
        if (((*pcStack56 == '\0') && (iVar2 - iVar1 <= lVar3)) && (lVar3 < 1)) {
          iVar1 = (int)lVar3 + iVar1;
          goto code_r0x00105929;
        }
      }
    }
  }
code_r0x0010596c:
  *param_2 = -1;
  uVar4 = 0xffffffff;
code_r0x00105930:
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
  func_0x00101a50();
  uVar4 = 0;
  puVar5 = numname_table;
  do {
    if (*(int *)puVar5 == iVar12) {
      func_0x001019a0(ppcVar11,uVar4 * 0xc + 0x3090a4,uVar4 * 3);
      return 0;
    }
    uVar6 = (int)uVar4 + 1;
    uVar4 = (ulong)uVar6;
    puVar5 = (undefined1 *)((int *)puVar5 + 3);
  } while (uVar6 != 0x23);
  iVar1 = func_0x00101c90();
  iVar2 = func_0x00101ce0();
  if ((iVar12 < iVar1) || (iVar2 < iVar12)) {
    uVar4 = 0xffffffff;
  }
  else {
    if ((iVar2 - iVar1 >> 1) + iVar1 < iVar12) {
      *(undefined4 *)ppcVar11 = 0x414d5452;
      *(undefined2 *)((undefined4 *)ppcVar11 + 1) = 0x58;
      iVar1 = iVar2;
    }
    else {
      *(undefined4 *)ppcVar11 = 0x494d5452;
      *(undefined2 *)((undefined4 *)ppcVar11 + 1) = 0x4e;
    }
    uVar6 = iVar12 - iVar1;
    uVar4 = (ulong)uVar6;
    if (uVar6 != 0) {
      func_0x00101d40((long)ppcVar11 + 5,1,0xffffffffffffffff,&UNK_0010718c,(ulong)uVar6);
      return 0;
    }
  }
  return uVar4;
}

