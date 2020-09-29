
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * hash_delete(long param_1,undefined8 param_2)

{
  float *pfVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined auVar9 [12];
  float fVar10;
  float fVar11;
  long *plStack40;
  long lStack32;
  
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = hash_find_entry(param_1,param_2,&plStack40,1);
  if ((lVar4 != 0) && (*(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1, *plStack40 == 0))
  {
    uVar5 = *(long *)(param_1 + 0x18) - 1;
    *(ulong *)(param_1 + 0x18) = uVar5;
    if ((long)uVar5 < 0) {
      fVar10 = (float)(uVar5 >> 1 | (ulong)((uint)uVar5 & 1));
      uVar7 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar10 + fVar10),0);
    }
    else {
      uVar7 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar5),0);
    }
    uVar5 = *(ulong *)(param_1 + 0x10);
    if ((long)uVar5 < 0) {
      fVar10 = (float)(uVar5 >> 1 | (ulong)((uint)uVar5 & 1));
      fVar10 = fVar10 + fVar10;
    }
    else {
      fVar10 = (float)uVar5;
    }
    fVar10 = fVar10 * **(float **)(param_1 + 0x28);
    if ((float)uVar7 < fVar10) {
      check_tuning_isra_0(uVar7,SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar10),0),
                          param_1 + 0x28);
      uVar5 = *(ulong *)(param_1 + 0x10);
      pfVar1 = *(float **)(param_1 + 0x28);
      if ((long)uVar5 < 0) {
        fVar10 = (float)(uVar5 >> 1 | (ulong)((uint)uVar5 & 1));
        fVar10 = fVar10 + fVar10;
      }
      else {
        fVar10 = (float)uVar5;
      }
      auVar9 = SUB1612((undefined  [16])0x0 >> 0x20,0);
      uVar5 = *(ulong *)(param_1 + 0x18);
      if ((long)uVar5 < 0) {
        fVar11 = (float)(uVar5 >> 1 | (ulong)((uint)uVar5 & 1));
        uVar7 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar11 + fVar11),0);
      }
      else {
        uVar7 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar5),0);
      }
      if ((float)uVar7 < *pfVar1 * fVar10) {
        fVar10 = fVar10 * pfVar1[1];
        if (*(char *)(pfVar1 + 4) == '\0') {
          fVar10 = fVar10 * pfVar1[2];
        }
        uVar8 = SUB168(CONCAT124(auVar9,fVar10),0);
        if (_UNK_0010a2d0 <= fVar10) {
          uVar8 = SUB168(CONCAT124(auVar9,fVar10 - _UNK_0010a2d0),0);
          uVar5 = (long)(fVar10 - _UNK_0010a2d0) ^ 0x8000000000000000;
        }
        else {
          uVar5 = (ulong)fVar10;
        }
        cVar3 = hash_rehash(uVar8,uVar7,param_1,uVar5);
        if (cVar3 == '\0') {
          lVar2 = *(long *)(param_1 + 0x48);
          while (lVar2 != 0) {
            lVar2 = *(long *)(lVar2 + 8);
            func_0x00101dd0();
          }
          *(undefined8 *)(param_1 + 0x48) = 0;
        }
      }
    }
  }
  if (lStack32 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101ad0();
    pcVar6 = (char *)func_0x00101c60(0xe);
    if (pcVar6 == (char *)0x0) {
      return &UNK_0010a2e0;
    }
    if (*pcVar6 == '\0') {
      pcVar6 = "ASCII";
    }
    return pcVar6;
  }
  return (char *)lVar4;
}

