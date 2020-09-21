
/* WARNING: Removing unreachable block (ram,0x00108b18) */
/* WARNING: Removing unreachable block (ram,0x00109028) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong di_set_insert(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  float10 fVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_RBX;
  ulong unaff_RBP;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong **unaff_R12;
  long in_FS_OFFSET;
  float10 fVar16;
  undefined8 uVar17;
  undefined auVar18 [12];
  float fVar19;
  float fVar20;
  long *plStack120;
  undefined2 uStack104;
  ulong uStack80;
  ulong *puStack56;
  long lStack48;
  undefined *puStack32;
  
  puStack32 = &UNK_00104edc;
  lVar7 = map_device_isra_0(*param_1,param_1 + 2,param_2);
  if (lVar7 == 0) {
    return 0xffffffff;
  }
  puStack32 = &UNK_00104ef0;
  uVar8 = map_inode_number_isra_1(param_1 + 1,param_3);
  if (uVar8 == 0xffffffffffffffff) {
    return 0xffffffff;
  }
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = uVar8;
  lVar15 = lVar7;
  if (uVar8 == 0) {
code_r0x00108cad:
    puStack56 = (ulong *)unaff_R12;
    func_0x00102400();
  }
  else {
    lVar9 = hash_find_entry(lVar7,uVar8,&puStack56,0);
    if (lVar9 != 0) {
      uVar11 = 0;
      goto code_r0x00108b1c;
    }
    uVar1 = *(ulong *)(lVar7 + 0x18);
    if ((long)uVar1 < 0) {
      uVar12 = *(ulong *)(lVar7 + 0x10);
      fVar19 = (float)(uVar1 >> 1 | (ulong)((uint)uVar1 & 1));
      lVar9 = *(long *)(lVar7 + 0x28);
      uVar11 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar19 + fVar19),0);
      if ((long)uVar12 < 0) goto code_r0x00108bea;
code_r0x00108b63:
      fVar19 = (float)uVar12;
    }
    else {
      lVar9 = *(long *)(lVar7 + 0x28);
      uVar11 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar1),0);
      uVar12 = *(ulong *)(lVar7 + 0x10);
      if (-1 < (long)uVar12) goto code_r0x00108b63;
code_r0x00108bea:
      fVar19 = (float)(uVar12 >> 1 | (ulong)((uint)uVar12 & 1));
      fVar19 = fVar19 + fVar19;
    }
    fVar19 = fVar19 * *(float *)(lVar9 + 8);
    unaff_RBX = lVar7;
    unaff_RBP = uVar8;
    if (fVar19 < (float)uVar11) {
      lVar15 = lVar7 + 0x28;
      check_tuning_isra_0(SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar19),0),uVar11
                         );
      uVar1 = *(ulong *)(lVar7 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x28);
      if ((long)uVar1 < 0) {
        fVar19 = (float)(uVar1 >> 1 | (ulong)((uint)uVar1 & 1));
        fVar19 = fVar19 + fVar19;
      }
      else {
        fVar19 = (float)uVar1;
      }
      auVar18 = SUB1612((undefined  [16])0x0 >> 0x20,0);
      uVar1 = *(ulong *)(lVar7 + 0x18);
      if ((long)uVar1 < 0) {
        fVar20 = (float)(uVar1 >> 1 | (ulong)((uint)uVar1 & 1));
        uVar11 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar20 + fVar20),0);
      }
      else {
        uVar11 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar1),0);
      }
      if ((float)uVar11 <= *(float *)(lVar9 + 8) * fVar19) goto code_r0x00108b7a;
      fVar19 = fVar19 * *(float *)(lVar9 + 0xc);
      if (*(char *)(lVar9 + 0x10) == '\0') {
        fVar19 = fVar19 * *(float *)(lVar9 + 8);
      }
      uVar17 = SUB168(CONCAT124(auVar18,fVar19),0);
      if (fVar19 < _UNK_001219ac) {
        if (_UNK_001219b0 <= fVar19) {
          uVar17 = SUB168(CONCAT124(auVar18,fVar19 - _UNK_001219b0),0);
          uVar13 = (long)(fVar19 - _UNK_001219b0) ^ 0x8000000000000000;
        }
        else {
          uVar13 = (ulong)fVar19;
        }
        lVar15 = lVar7;
        cVar5 = hash_rehash(uVar17,uVar11);
        if (cVar5 != '\0') {
          uVar13 = uVar8;
          lVar15 = lVar7;
          lVar9 = hash_find_entry(lVar7,uVar8,&puStack56,0);
          unaff_R12 = &puStack56;
          if (lVar9 != 0) goto code_r0x00108cad;
          goto code_r0x00108b7a;
        }
      }
code_r0x00108ce3:
      uVar11 = 0xffffffff;
      goto code_r0x00108b1c;
    }
code_r0x00108b7a:
    if (*puStack56 != 0) {
      puVar10 = *(ulong **)(lVar7 + 0x48);
      if (puVar10 == (ulong *)0x0) {
        lVar15 = 0x10;
        puVar10 = (ulong *)func_0x00102780();
        if (puVar10 == (ulong *)0x0) goto code_r0x00108ce3;
      }
      else {
        *(ulong *)(lVar7 + 0x48) = puVar10[1];
      }
      uVar1 = puStack56[1];
      *puVar10 = uVar8;
      puVar10[1] = uVar1;
      *(ulong **)(puStack56 + 1) = puVar10;
      uVar11 = 1;
      *(long *)(lVar7 + 0x20) = *(long *)(lVar7 + 0x20) + 1;
      goto code_r0x00108b1c;
    }
  }
  *puStack56 = unaff_RBP;
  uVar11 = 1;
  *(long *)(unaff_RBX + 0x20) = *(long *)(unaff_RBX + 0x20) + 1;
  *(long *)(unaff_RBX + 0x18) = *(long *)(unaff_RBX + 0x18) + 1;
code_r0x00108b1c:
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
  func_0x00102560();
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = hash_insert_if_absent();
  if (iVar6 == -1) {
    uVar13 = 0;
  }
  else {
    if (iVar6 == 0) {
      uVar13 = uStack80;
    }
  }
  if (lVar7 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
  func_0x00102560();
  iVar14 = (int)lVar15;
  uStack104 = (undefined2)uVar13;
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = iVar14;
  lVar9 = hash_find_entry();
  if ((lVar9 != 0) && (*(long *)(lVar15 + 0x20) = *(long *)(lVar15 + 0x20) + -1, *plStack120 == 0))
  {
    uVar8 = *(long *)(lVar15 + 0x18) - 1;
    *(ulong *)(lVar15 + 0x18) = uVar8;
    if ((long)uVar8 < 0) {
      fVar19 = (float)(uVar8 >> 1 | (ulong)((uint)uVar8 & 1));
      uVar11 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar19 + fVar19),0);
    }
    else {
      uVar11 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar8),0);
    }
    uVar8 = *(ulong *)(lVar15 + 0x10);
    if ((long)uVar8 < 0) {
      fVar19 = (float)(uVar8 >> 1 | (ulong)((uint)uVar8 & 1));
      fVar19 = fVar19 + fVar19;
    }
    else {
      fVar19 = (float)uVar8;
    }
    fVar19 = fVar19 * **(float **)(lVar15 + 0x28);
    if ((float)uVar11 < fVar19) {
      iVar6 = iVar14 + 0x28;
      check_tuning_isra_0(uVar11,SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar19),0)
                         );
      uVar8 = *(ulong *)(lVar15 + 0x10);
      pfVar2 = *(float **)(lVar15 + 0x28);
      if ((long)uVar8 < 0) {
        fVar19 = (float)(uVar8 >> 1 | (ulong)((uint)uVar8 & 1));
        fVar19 = fVar19 + fVar19;
      }
      else {
        fVar19 = (float)uVar8;
      }
      auVar18 = SUB1612((undefined  [16])0x0 >> 0x20,0);
      uVar8 = *(ulong *)(lVar15 + 0x18);
      if ((long)uVar8 < 0) {
        fVar20 = (float)(uVar8 >> 1 | (ulong)((uint)uVar8 & 1));
        uVar11 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar20 + fVar20),0);
      }
      else {
        uVar11 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),(float)uVar8),0);
      }
      if ((float)uVar11 < *pfVar2 * fVar19) {
        fVar19 = fVar19 * pfVar2[1];
        if (*(char *)(pfVar2 + 4) == '\0') {
          fVar19 = fVar19 * pfVar2[2];
        }
        uVar17 = SUB168(CONCAT124(auVar18,fVar19),0);
        if (_UNK_001219b0 <= fVar19) {
          uVar17 = SUB168(CONCAT124(auVar18,fVar19 - _UNK_001219b0),0);
          uVar8 = (long)(fVar19 - _UNK_001219b0) ^ 0x8000000000000000;
        }
        else {
          uVar8 = (ulong)fVar19;
        }
        iVar6 = iVar14;
        cVar5 = hash_rehash(uVar17,uVar11,lVar15,uVar8);
        if (cVar5 == '\0') {
          lVar3 = *(long *)(lVar15 + 0x48);
          iVar6 = (int)lVar3;
          while (lVar3 != 0) {
            lVar3 = *(long *)(lVar3 + 8);
            iVar6 = (int)lVar3;
            func_0x00102a10();
          }
          *(undefined8 *)(lVar15 + 0x48) = 0;
        }
      }
    }
  }
  if (lVar7 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar9;
  }
  func_0x00102560();
  fVar4 = (float10)CONCAT28(uStack104,lVar7);
  if ((float10)_UNK_001219b0 <= fVar4) {
    uVar8 = (long)ROUND(fVar4 - (float10)_UNK_001219b0) ^ 0x8000000000000000;
  }
  else {
    uVar8 = (ulong)ROUND(fVar4);
  }
  fVar16 = (float10)uVar8;
  if ((long)uVar8 < 0) {
    fVar16 = fVar16 + (float10)_UNK_001219ac;
  }
  if (((iVar6 == 0) && (fVar4 != fVar16)) && (uVar8 = uVar8 + 1, (long)uVar8 < 0)) {
    return uVar8;
  }
  return uVar8;
}

