
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong hash_insert_if_absent(undefined8 *param_1,ulong param_2,long *param_3)

{
  float *pfVar1;
  ulong **ppuVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *unaff_RBX;
  ulong unaff_RBP;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong *unaff_R12;
  long in_FS_OFFSET;
  undefined8 uVar14;
  undefined auVar15 [12];
  float fVar16;
  float fVar17;
  long *plStack120;
  ulong uStack80;
  ulong *puStack56;
  long lStack48;
  
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = param_2;
  puVar12 = param_1;
  ppuVar2 = (ulong **)unaff_R12;
  if (param_2 == 0) {
code_r0x0010708d:
    puStack56 = (ulong *)ppuVar2;
    func_0x001020a0();
  }
  else {
    lVar5 = hash_find_entry(param_1,param_2,&puStack56,0);
    if (lVar5 != 0) {
      uVar7 = 0;
      if (param_3 != (long *)0x0) {
        *param_3 = lVar5;
      }
      goto code_r0x00106efc;
    }
    uVar11 = param_1[3];
    if ((long)uVar11 < 0) {
      uVar8 = param_1[2];
      fVar16 = (float)(uVar11 >> 1 | (ulong)((uint)uVar11 & 1));
      lVar5 = param_1[5];
      uVar7 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar16 + fVar16),0);
      if (-1 < (long)uVar8) goto code_r0x00106f43;
code_r0x00106fca:
      fVar16 = (float)(uVar8 >> 1 | (ulong)((uint)uVar8 & 1));
      fVar16 = fVar16 + fVar16;
    }
    else {
      lVar5 = param_1[5];
      uVar7 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar11),0);
      uVar8 = param_1[2];
      if ((long)uVar8 < 0) goto code_r0x00106fca;
code_r0x00106f43:
      fVar16 = (float)uVar8;
    }
    fVar16 = fVar16 * *(float *)(lVar5 + 8);
    unaff_RBX = param_1;
    unaff_RBP = param_2;
    if (fVar16 < (float)uVar7) {
      puVar12 = param_1 + 5;
      check_tuning_isra_0(SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar16),0),uVar7)
      ;
      uVar11 = param_1[2];
      lVar5 = param_1[5];
      if ((long)uVar11 < 0) {
        fVar16 = (float)(uVar11 >> 1 | (ulong)((uint)uVar11 & 1));
        fVar16 = fVar16 + fVar16;
      }
      else {
        fVar16 = (float)uVar11;
      }
      auVar15 = SUB1612((undefined  [16])0x0 >> 0x20,0);
      uVar11 = param_1[3];
      if ((long)uVar11 < 0) {
        fVar17 = (float)(uVar11 >> 1 | (ulong)((uint)uVar11 & 1));
        uVar7 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar17 + fVar17),0);
      }
      else {
        uVar7 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar11),0);
      }
      if ((float)uVar7 <= *(float *)(lVar5 + 8) * fVar16) goto code_r0x00106f5a;
      fVar16 = fVar16 * *(float *)(lVar5 + 0xc);
      if (*(char *)(lVar5 + 0x10) == '\0') {
        fVar16 = fVar16 * *(float *)(lVar5 + 8);
      }
      uVar14 = SUB168(CONCAT124(auVar15,fVar16),0);
      if (fVar16 < _UNK_0011001c) {
        if (_UNK_00110020 <= fVar16) {
          uVar14 = SUB168(CONCAT124(auVar15,fVar16 - _UNK_00110020),0);
          uVar10 = (long)(fVar16 - _UNK_00110020) ^ 0x8000000000000000;
        }
        else {
          uVar10 = (ulong)fVar16;
        }
        puVar12 = param_1;
        cVar3 = hash_rehash(uVar14,uVar7);
        if (cVar3 != '\0') {
          uVar10 = param_2;
          puVar12 = param_1;
          lVar5 = hash_find_entry(param_1,param_2,&puStack56,0);
          ppuVar2 = &puStack56;
          if (lVar5 != 0) goto code_r0x0010708d;
          goto code_r0x00106f5a;
        }
      }
code_r0x001070c3:
      uVar7 = 0xffffffff;
      goto code_r0x00106efc;
    }
code_r0x00106f5a:
    if (*puStack56 != 0) {
      puVar6 = (ulong *)param_1[9];
      if (puVar6 == (ulong *)0x0) {
        puVar12 = (undefined8 *)0x10;
        puVar6 = (ulong *)func_0x001023c0();
        if (puVar6 == (ulong *)0x0) goto code_r0x001070c3;
      }
      else {
        param_1[9] = puVar6[1];
      }
      uVar11 = puStack56[1];
      *puVar6 = param_2;
      puVar6[1] = uVar11;
      *(ulong **)(puStack56 + 1) = puVar6;
      uVar7 = 1;
      param_1[4] = param_1[4] + 1;
      goto code_r0x00106efc;
    }
  }
  *puStack56 = unaff_RBP;
  uVar7 = 1;
  unaff_RBX[4] = unaff_RBX[4] + 1;
  unaff_RBX[3] = unaff_RBX[3] + 1;
code_r0x00106efc:
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
  func_0x001021f0();
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = uVar10;
  iVar4 = hash_insert_if_absent();
  if (iVar4 == -1) {
    uVar10 = 0;
  }
  else {
    if (iVar4 == 0) {
      uVar10 = uStack80;
    }
  }
  if (lVar5 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x001021f0();
    lVar5 = *(long *)(in_FS_OFFSET + 0x28);
    puVar13 = puVar12;
    lVar9 = hash_find_entry();
    if ((lVar9 != 0) && (puVar12[4] = puVar12[4] + -1, *plStack120 == 0)) {
      uVar10 = puVar12[3] - 1;
      puVar12[3] = uVar10;
      if ((long)uVar10 < 0) {
        fVar16 = (float)(uVar10 >> 1 | (ulong)((uint)uVar10 & 1));
        uVar7 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar16 + fVar16),0);
      }
      else {
        uVar7 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar10),0);
      }
      uVar10 = puVar12[2];
      if ((long)uVar10 < 0) {
        fVar16 = (float)(uVar10 >> 1 | (ulong)((uint)uVar10 & 1));
        fVar16 = fVar16 + fVar16;
      }
      else {
        fVar16 = (float)uVar10;
      }
      if ((float)uVar7 < fVar16 * *(float *)puVar12[5]) {
        puVar13 = puVar12 + 5;
        check_tuning_isra_0(uVar7,SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),
                                                   fVar16 * *(float *)puVar12[5]),0));
        uVar10 = puVar12[2];
        pfVar1 = (float *)puVar12[5];
        if ((long)uVar10 < 0) {
          fVar16 = (float)(uVar10 >> 1 | (ulong)((uint)uVar10 & 1));
          fVar16 = fVar16 + fVar16;
        }
        else {
          fVar16 = (float)uVar10;
        }
        auVar15 = SUB1612((undefined  [16])0x0 >> 0x20,0);
        uVar10 = puVar12[3];
        if ((long)uVar10 < 0) {
          fVar17 = (float)(uVar10 >> 1 | (ulong)((uint)uVar10 & 1));
          uVar7 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar17 + fVar17),0);
        }
        else {
          uVar7 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar10),0);
        }
        if ((float)uVar7 < *pfVar1 * fVar16) {
          fVar16 = fVar16 * pfVar1[1];
          if (*(char *)(pfVar1 + 4) == '\0') {
            fVar16 = fVar16 * pfVar1[2];
          }
          uVar14 = SUB168(CONCAT124(auVar15,fVar16),0);
          if (_UNK_00110020 <= fVar16) {
            uVar14 = SUB168(CONCAT124(auVar15,fVar16 - _UNK_00110020),0);
            uVar11 = (long)(fVar16 - _UNK_00110020) ^ 0x8000000000000000;
          }
          else {
            uVar11 = (ulong)fVar16;
          }
          puVar13 = puVar12;
          cVar3 = hash_rehash(uVar14,uVar7);
          if (cVar3 == '\0') {
            puVar13 = (undefined8 *)puVar12[9];
            while (puVar13 != (undefined8 *)0x0) {
              puVar13 = (undefined8 *)puVar13[1];
              func_0x00102070();
            }
            puVar12[9] = 0;
          }
        }
      }
    }
    if (lVar5 != *(long *)(in_FS_OFFSET + 0x28)) {
      func_0x001021f0();
      uVar10 = hash_pjw(*puVar13);
      return (uVar10 ^ puVar13[1]) % uVar11;
    }
    return lVar9;
  }
  return uVar10;
}

