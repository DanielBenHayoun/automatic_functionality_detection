
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * hash_insert(long param_1,undefined8 param_2)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined auVar11 [12];
  float fVar12;
  float fVar13;
  long *plStack64;
  undefined8 uStack24;
  long lStack16;
  
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = hash_insert_if_absent(param_1,param_2,&uStack24);
  if (iVar5 == -1) {
    param_2 = 0;
  }
  else {
    if (iVar5 == 0) {
      param_2 = uStack24;
    }
  }
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (char *)param_2;
  }
  func_0x00101ad0();
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = hash_find_entry();
  if ((lVar6 != 0) && (*(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1, *plStack64 == 0))
  {
    uVar7 = *(long *)(param_1 + 0x18) - 1;
    *(ulong *)(param_1 + 0x18) = uVar7;
    if ((long)uVar7 < 0) {
      fVar12 = (float)(uVar7 >> 1 | (ulong)((uint)uVar7 & 1));
      uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar12 + fVar12),0);
    }
    else {
      uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar7),0);
    }
    uVar7 = *(ulong *)(param_1 + 0x10);
    if ((long)uVar7 < 0) {
      fVar12 = (float)(uVar7 >> 1 | (ulong)((uint)uVar7 & 1));
      fVar12 = fVar12 + fVar12;
    }
    else {
      fVar12 = (float)uVar7;
    }
    fVar12 = fVar12 * **(float **)(param_1 + 0x28);
    if ((float)uVar9 < fVar12) {
      check_tuning_isra_0(uVar9,SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar12),0),
                          param_1 + 0x28);
      uVar7 = *(ulong *)(param_1 + 0x10);
      pfVar2 = *(float **)(param_1 + 0x28);
      if ((long)uVar7 < 0) {
        fVar12 = (float)(uVar7 >> 1 | (ulong)((uint)uVar7 & 1));
        fVar12 = fVar12 + fVar12;
      }
      else {
        fVar12 = (float)uVar7;
      }
      auVar11 = SUB1612((undefined  [16])0x0 >> 0x20,0);
      uVar7 = *(ulong *)(param_1 + 0x18);
      if ((long)uVar7 < 0) {
        fVar13 = (float)(uVar7 >> 1 | (ulong)((uint)uVar7 & 1));
        uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar13 + fVar13),0);
      }
      else {
        uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar7),0);
      }
      if ((float)uVar9 < *pfVar2 * fVar12) {
        fVar12 = fVar12 * pfVar2[1];
        if (*(char *)(pfVar2 + 4) == '\0') {
          fVar12 = fVar12 * pfVar2[2];
        }
        uVar10 = SUB168(CONCAT124(auVar11,fVar12),0);
        if (_UNK_0010a2d0 <= fVar12) {
          uVar10 = SUB168(CONCAT124(auVar11,fVar12 - _UNK_0010a2d0),0);
          uVar7 = (long)(fVar12 - _UNK_0010a2d0) ^ 0x8000000000000000;
        }
        else {
          uVar7 = (ulong)fVar12;
        }
        cVar4 = hash_rehash(uVar10,uVar9,param_1,uVar7);
        if (cVar4 == '\0') {
          lVar3 = *(long *)(param_1 + 0x48);
          while (lVar3 != 0) {
            lVar3 = *(long *)(lVar3 + 8);
            func_0x00101dd0();
          }
          *(undefined8 *)(param_1 + 0x48) = 0;
        }
      }
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101ad0();
    pcVar8 = (char *)func_0x00101c60(0xe);
    if (pcVar8 == (char *)0x0) {
      return &UNK_0010a2e0;
    }
    if (*pcVar8 == '\0') {
      pcVar8 = "ASCII";
    }
    return pcVar8;
  }
  return (char *)lVar6;
}

