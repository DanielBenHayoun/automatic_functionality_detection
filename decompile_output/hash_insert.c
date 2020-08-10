
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong hash_insert(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  float *pfVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined auVar11 [12];
  float fVar12;
  float fVar13;
  long *plStack64;
  ulong uStack24;
  long lStack16;
  
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = param_2;
  iVar4 = hash_insert_if_absent(param_1,param_2,&uStack24);
  if (iVar4 == -1) {
    param_2 = 0;
  }
  else {
    if (iVar4 == 0) {
      param_2 = uStack24;
    }
  }
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
  func_0x00103420();
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = param_1;
  lVar5 = hash_find_entry();
  if ((lVar5 != 0) && (param_1[4] = param_1[4] + -1, *plStack64 == 0)) {
    uVar6 = param_1[3] - 1;
    param_1[3] = uVar6;
    if ((long)uVar6 < 0) {
      fVar12 = (float)(uVar6 >> 1 | (ulong)((uint)uVar6 & 1));
      uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar12 + fVar12),0);
    }
    else {
      uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar6),0);
    }
    uVar6 = param_1[2];
    if ((long)uVar6 < 0) {
      fVar12 = (float)(uVar6 >> 1 | (ulong)((uint)uVar6 & 1));
      fVar12 = fVar12 + fVar12;
    }
    else {
      fVar12 = (float)uVar6;
    }
    if ((float)uVar9 < fVar12 * *(float *)param_1[5]) {
      puVar8 = param_1 + 5;
      check_tuning_isra_0(uVar9,SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),
                                                 fVar12 * *(float *)param_1[5]),0));
      uVar6 = param_1[2];
      pfVar2 = (float *)param_1[5];
      if ((long)uVar6 < 0) {
        fVar12 = (float)(uVar6 >> 1 | (ulong)((uint)uVar6 & 1));
        fVar12 = fVar12 + fVar12;
      }
      else {
        fVar12 = (float)uVar6;
      }
      auVar11 = SUB1612((undefined  [16])0x0 >> 0x20,0);
      uVar6 = param_1[3];
      if ((long)uVar6 < 0) {
        fVar13 = (float)(uVar6 >> 1 | (ulong)((uint)uVar6 & 1));
        uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar13 + fVar13),0);
      }
      else {
        uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar6),0);
      }
      if ((float)uVar9 < *pfVar2 * fVar12) {
        fVar12 = fVar12 * pfVar2[1];
        if (*(char *)(pfVar2 + 4) == '\0') {
          fVar12 = fVar12 * pfVar2[2];
        }
        uVar10 = SUB168(CONCAT124(auVar11,fVar12),0);
        if (_UNK_0011a030 <= fVar12) {
          uVar10 = SUB168(CONCAT124(auVar11,fVar12 - _UNK_0011a030),0);
          uVar7 = (long)(fVar12 - _UNK_0011a030) ^ 0x8000000000000000;
        }
        else {
          uVar7 = (ulong)fVar12;
        }
        puVar8 = param_1;
        cVar3 = hash_rehash(uVar10,uVar9);
        if (cVar3 == '\0') {
          puVar8 = (undefined8 *)param_1[9];
          while (puVar8 != (undefined8 *)0x0) {
            puVar8 = (undefined8 *)puVar8[1];
            func_0x00103880();
          }
          param_1[9] = 0;
        }
      }
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00103420();
    uVar6 = hash_pjw(*puVar8);
    return (uVar6 ^ puVar8[1]) % uVar7;
  }
  return lVar5;
}

