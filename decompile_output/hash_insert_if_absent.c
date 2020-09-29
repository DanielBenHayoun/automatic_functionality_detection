
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * hash_insert_if_absent(long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  ulong **ppuVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  long unaff_RBX;
  ulong unaff_RBP;
  long lVar14;
  ulong *unaff_R12;
  long in_FS_OFFSET;
  undefined8 uVar15;
  undefined auVar16 [12];
  float fVar17;
  float fVar18;
  long *plStack120;
  ulong uStack80;
  ulong *puStack56;
  long lStack48;
  
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = param_2;
  lVar14 = param_1;
  ppuVar4 = (ulong **)unaff_R12;
  if (param_2 == 0) {
code_r0x00108a6d:
    puStack56 = (ulong *)ppuVar4;
    func_0x001019a0();
  }
  else {
    lVar7 = hash_find_entry(param_1,param_2,&puStack56,0);
    if (lVar7 != 0) {
      uVar9 = 0;
      if (param_3 != (long *)0x0) {
        *param_3 = lVar7;
      }
      goto code_r0x001088dc;
    }
    uVar1 = *(ulong *)(param_1 + 0x18);
    if ((long)uVar1 < 0) {
      uVar10 = *(ulong *)(param_1 + 0x10);
      fVar17 = (float)(uVar1 >> 1 | (ulong)((uint)uVar1 & 1));
      lVar7 = *(long *)(param_1 + 0x28);
      uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar17 + fVar17),0);
      if (-1 < (long)uVar10) goto code_r0x00108923;
code_r0x001089aa:
      fVar17 = (float)(uVar10 >> 1 | (ulong)((uint)uVar10 & 1));
      fVar17 = fVar17 + fVar17;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x28);
      uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar1),0);
      uVar10 = *(ulong *)(param_1 + 0x10);
      if ((long)uVar10 < 0) goto code_r0x001089aa;
code_r0x00108923:
      fVar17 = (float)uVar10;
    }
    fVar17 = fVar17 * *(float *)(lVar7 + 8);
    unaff_RBX = param_1;
    unaff_RBP = param_2;
    if (fVar17 < (float)uVar9) {
      lVar14 = param_1 + 0x28;
      check_tuning_isra_0(SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar17),0),uVar9)
      ;
      uVar1 = *(ulong *)(param_1 + 0x10);
      lVar7 = *(long *)(param_1 + 0x28);
      if ((long)uVar1 < 0) {
        fVar17 = (float)(uVar1 >> 1 | (ulong)((uint)uVar1 & 1));
        fVar17 = fVar17 + fVar17;
      }
      else {
        fVar17 = (float)uVar1;
      }
      auVar16 = SUB1612((undefined  [16])0x0 >> 0x20,0);
      uVar1 = *(ulong *)(param_1 + 0x18);
      if ((long)uVar1 < 0) {
        fVar18 = (float)(uVar1 >> 1 | (ulong)((uint)uVar1 & 1));
        uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar18 + fVar18),0);
      }
      else {
        uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar1),0);
      }
      if ((float)uVar9 <= *(float *)(lVar7 + 8) * fVar17) goto code_r0x0010893a;
      fVar17 = fVar17 * *(float *)(lVar7 + 0xc);
      if (*(char *)(lVar7 + 0x10) == '\0') {
        fVar17 = fVar17 * *(float *)(lVar7 + 8);
      }
      uVar15 = SUB168(CONCAT124(auVar16,fVar17),0);
      if (fVar17 < _UNK_0010a2cc) {
        if (_UNK_0010a2d0 <= fVar17) {
          uVar15 = SUB168(CONCAT124(auVar16,fVar17 - _UNK_0010a2d0),0);
          uVar12 = (long)(fVar17 - _UNK_0010a2d0) ^ 0x8000000000000000;
        }
        else {
          uVar12 = (ulong)fVar17;
        }
        lVar14 = param_1;
        cVar5 = hash_rehash(uVar15,uVar9);
        if (cVar5 != '\0') {
          uVar12 = param_2;
          lVar14 = param_1;
          lVar7 = hash_find_entry(param_1,param_2,&puStack56,0);
          ppuVar4 = &puStack56;
          if (lVar7 != 0) goto code_r0x00108a6d;
          goto code_r0x0010893a;
        }
      }
code_r0x00108aa3:
      uVar9 = 0xffffffff;
      goto code_r0x001088dc;
    }
code_r0x0010893a:
    if (*puStack56 != 0) {
      puVar8 = *(ulong **)(param_1 + 0x48);
      if (puVar8 == (ulong *)0x0) {
        lVar14 = 0x10;
        puVar8 = (ulong *)func_0x00101c40();
        if (puVar8 == (ulong *)0x0) goto code_r0x00108aa3;
      }
      else {
        *(ulong *)(param_1 + 0x48) = puVar8[1];
      }
      uVar1 = puStack56[1];
      *puVar8 = param_2;
      puVar8[1] = uVar1;
      *(ulong **)(puStack56 + 1) = puVar8;
      uVar9 = 1;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      goto code_r0x001088dc;
    }
  }
  *puStack56 = unaff_RBP;
  uVar9 = 1;
  *(long *)(unaff_RBX + 0x20) = *(long *)(unaff_RBX + 0x20) + 1;
  *(long *)(unaff_RBX + 0x18) = *(long *)(unaff_RBX + 0x18) + 1;
code_r0x001088dc:
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (char *)uVar9;
  }
  func_0x00101ad0();
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = hash_insert_if_absent();
  if (iVar6 == -1) {
    uVar12 = 0;
  }
  else {
    if (iVar6 == 0) {
      uVar12 = uStack80;
    }
  }
  if (lVar7 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101ad0();
    lVar7 = *(long *)(in_FS_OFFSET + 0x28);
    lVar11 = hash_find_entry();
    if ((lVar11 != 0) &&
       (*(long *)(lVar14 + 0x20) = *(long *)(lVar14 + 0x20) + -1, *plStack120 == 0)) {
      uVar12 = *(long *)(lVar14 + 0x18) - 1;
      *(ulong *)(lVar14 + 0x18) = uVar12;
      if ((long)uVar12 < 0) {
        fVar17 = (float)(uVar12 >> 1 | (ulong)((uint)uVar12 & 1));
        uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar17 + fVar17),0);
      }
      else {
        uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar12),0);
      }
      uVar12 = *(ulong *)(lVar14 + 0x10);
      if ((long)uVar12 < 0) {
        fVar17 = (float)(uVar12 >> 1 | (ulong)((uint)uVar12 & 1));
        fVar17 = fVar17 + fVar17;
      }
      else {
        fVar17 = (float)uVar12;
      }
      fVar17 = fVar17 * **(float **)(lVar14 + 0x28);
      if ((float)uVar9 < fVar17) {
        check_tuning_isra_0(uVar9,SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar17),0
                                        ),lVar14 + 0x28);
        uVar12 = *(ulong *)(lVar14 + 0x10);
        pfVar2 = *(float **)(lVar14 + 0x28);
        if ((long)uVar12 < 0) {
          fVar17 = (float)(uVar12 >> 1 | (ulong)((uint)uVar12 & 1));
          fVar17 = fVar17 + fVar17;
        }
        else {
          fVar17 = (float)uVar12;
        }
        auVar16 = SUB1612((undefined  [16])0x0 >> 0x20,0);
        uVar12 = *(ulong *)(lVar14 + 0x18);
        if ((long)uVar12 < 0) {
          fVar18 = (float)(uVar12 >> 1 | (ulong)((uint)uVar12 & 1));
          uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar18 + fVar18),0);
        }
        else {
          uVar9 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar12),0);
        }
        if ((float)uVar9 < *pfVar2 * fVar17) {
          fVar17 = fVar17 * pfVar2[1];
          if (*(char *)(pfVar2 + 4) == '\0') {
            fVar17 = fVar17 * pfVar2[2];
          }
          uVar15 = SUB168(CONCAT124(auVar16,fVar17),0);
          if (_UNK_0010a2d0 <= fVar17) {
            uVar15 = SUB168(CONCAT124(auVar16,fVar17 - _UNK_0010a2d0),0);
            uVar12 = (long)(fVar17 - _UNK_0010a2d0) ^ 0x8000000000000000;
          }
          else {
            uVar12 = (ulong)fVar17;
          }
          cVar5 = hash_rehash(uVar15,uVar9,lVar14,uVar12);
          if (cVar5 == '\0') {
            lVar3 = *(long *)(lVar14 + 0x48);
            while (lVar3 != 0) {
              lVar3 = *(long *)(lVar3 + 8);
              func_0x00101dd0();
            }
            *(undefined8 *)(lVar14 + 0x48) = 0;
          }
        }
      }
    }
    if (lVar7 != *(long *)(in_FS_OFFSET + 0x28)) {
      func_0x00101ad0();
      pcVar13 = (char *)func_0x00101c60(0xe);
      if (pcVar13 == (char *)0x0) {
        return &UNK_0010a2e0;
      }
      if (*pcVar13 == '\0') {
        pcVar13 = "ASCII";
      }
      return pcVar13;
    }
    return (char *)lVar11;
  }
  return (char *)uVar12;
}

