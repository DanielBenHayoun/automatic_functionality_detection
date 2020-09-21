
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong hash_delete(undefined8 *param_1,ulong param_2)

{
  float *pfVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auVar8 [12];
  float fVar9;
  float fVar10;
  long *plStack40;
  long lStack32;
  
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = param_1;
  lVar3 = hash_find_entry(param_1,param_2,&plStack40,1);
  if ((lVar3 != 0) && (param_1[4] = param_1[4] + -1, *plStack40 == 0)) {
    uVar4 = param_1[3] - 1;
    param_1[3] = uVar4;
    if ((long)uVar4 < 0) {
      fVar9 = (float)(uVar4 >> 1 | (ulong)((uint)uVar4 & 1));
      uVar6 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar9 + fVar9),0);
    }
    else {
      uVar6 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar4),0);
    }
    uVar4 = param_1[2];
    if ((long)uVar4 < 0) {
      fVar9 = (float)(uVar4 >> 1 | (ulong)((uint)uVar4 & 1));
      fVar9 = fVar9 + fVar9;
    }
    else {
      fVar9 = (float)uVar4;
    }
    if ((float)uVar6 < fVar9 * *(float *)param_1[5]) {
      puVar5 = param_1 + 5;
      check_tuning_isra_0(uVar6,SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),
                                                 fVar9 * *(float *)param_1[5]),0));
      uVar4 = param_1[2];
      pfVar1 = (float *)param_1[5];
      if ((long)uVar4 < 0) {
        fVar9 = (float)(uVar4 >> 1 | (ulong)((uint)uVar4 & 1));
        fVar9 = fVar9 + fVar9;
      }
      else {
        fVar9 = (float)uVar4;
      }
      auVar8 = SUB1612((undefined  [16])0x0 >> 0x20,0);
      uVar4 = param_1[3];
      if ((long)uVar4 < 0) {
        fVar10 = (float)(uVar4 >> 1 | (ulong)((uint)uVar4 & 1));
        uVar6 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar10 + fVar10),0);
      }
      else {
        uVar6 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar4),0);
      }
      if ((float)uVar6 < *pfVar1 * fVar9) {
        fVar9 = fVar9 * pfVar1[1];
        if (*(char *)(pfVar1 + 4) == '\0') {
          fVar9 = fVar9 * pfVar1[2];
        }
        uVar7 = SUB168(CONCAT124(auVar8,fVar9),0);
        if (_UNK_00110020 <= fVar9) {
          uVar7 = SUB168(CONCAT124(auVar8,fVar9 - _UNK_00110020),0);
          param_2 = (long)(fVar9 - _UNK_00110020) ^ 0x8000000000000000;
        }
        else {
          param_2 = (ulong)fVar9;
        }
        puVar5 = param_1;
        cVar2 = hash_rehash(uVar7,uVar6);
        if (cVar2 == '\0') {
          puVar5 = (undefined8 *)param_1[9];
          while (puVar5 != (undefined8 *)0x0) {
            puVar5 = (undefined8 *)puVar5[1];
            func_0x00102070();
          }
          param_1[9] = 0;
        }
      }
    }
  }
  if (lStack32 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x001021f0();
    uVar4 = hash_pjw(*puVar5);
    return (uVar4 ^ puVar5[1]) % param_2;
  }
  return lVar3;
}

