
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ** hash_rehash(long **param_1,ulong param_2)

{
  long ***ppplVar1;
  long **pplVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long **pplVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  bool bVar13;
  long *extraout_RDX;
  long *plVar14;
  long **pplVar15;
  long **pplVar16;
  long **pplVar17;
  long **pplVar18;
  long in_FS_OFFSET;
  float fVar19;
  undefined8 uVar20;
  undefined auVar21 [12];
  float fVar22;
  long *plStack240;
  long **pplStack200;
  long **pplStack176;
  long lStack168;
  long **pplStack152;
  long **pplStack144;
  long **pplStack136;
  long *plStack120;
  long *plStack112;
  long **pplStack104;
  long *plStack96;
  undefined8 uStack88;
  long *plStack80;
  long *plStack72;
  long *plStack64;
  long *plStack56;
  long *plStack48;
  long lStack32;
  
  pplStack136 = &plStack120;
  pplVar16 = (long **)param_1[5];
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)((long *)pplVar16 + 2) == '\0') {
    if ((long)param_2 < 0) {
      fVar19 = (float)(param_2 >> 1 | (ulong)((uint)param_2 & 1));
      fVar19 = fVar19 + fVar19;
    }
    else {
      fVar19 = (float)param_2;
    }
    fVar19 = fVar19 / *(float *)((long *)pplVar16 + 1);
    if (_UNK_0011001c <= fVar19) goto code_r0x00106df0;
    if (fVar19 < _UNK_00110020) {
      param_2 = (ulong)fVar19;
    }
    else {
      param_2 = (long)(fVar19 - _UNK_00110020) ^ 0x8000000000000000;
    }
  }
  pplStack152 = (long **)next_prime(param_2,param_2);
  bVar13 = false;
  lVar6 = SUB168(ZEXT816(8) * ZEXT816(pplStack152),0);
  if (SUB168(ZEXT816(8) * ZEXT816(pplStack152) >> 0x40,0) != 0) goto code_r0x00106e9f;
  do {
    if (lVar6 < 0) {
      bVar13 = true;
    }
    if ((pplStack152 == (long **)0x0) || (bVar13)) {
code_r0x00106df0:
      pplStack152 = (long **)0x0;
    }
    else {
      if ((long **)param_1[2] == pplStack152) {
        pplStack152 = (long **)0x1;
      }
      else {
        plStack120 = (long *)func_0x00102320(pplStack152,0x10);
        if (plStack120 == (long *)0x0) goto code_r0x00106df0;
        plStack112 = plStack120 + (long)pplStack152 * 2;
        plStack72 = param_1[6];
        plStack96 = (long *)0x0;
        plStack64 = param_1[7];
        uStack88 = 0;
        plStack56 = param_1[8];
        plStack48 = param_1[9];
        pplStack104 = pplStack152;
        plStack80 = (long *)pplVar16;
        uVar4 = transfer_entries(&plStack120,param_1,0);
        pplStack152 = (long **)(ulong)uVar4;
        if ((char)uVar4 == '\0') {
          param_1[9] = plStack48;
          pplVar16 = &plStack120;
          pplVar17 = param_1;
          cVar3 = transfer_entries(param_1,&plStack120,1);
          if ((cVar3 == '\0') ||
             (pplVar16 = &plStack120, pplVar17 = param_1,
             cVar3 = transfer_entries(param_1,&plStack120,0), cVar3 == '\0')) {
            func_0x001020a0();
            lStack168 = *(long *)(in_FS_OFFSET + 0x28);
            pplVar7 = pplStack152;
            pplVar15 = pplVar16;
            pplVar18 = pplVar17;
            ppplVar1 = (long ***)&plStack120;
            pplStack144 = param_1;
            pplVar2 = &plStack120;
            if (pplVar16 == (long **)0x0) {
code_r0x0010708d:
              pplStack136 = pplVar2;
              pplStack176 = (long **)ppplVar1;
              func_0x001020a0();
            }
            else {
              lVar6 = hash_find_entry();
              if (lVar6 != 0) {
                uVar8 = 0;
                if (extraout_RDX != (long *)0x0) {
                  *extraout_RDX = lVar6;
                }
                goto code_r0x00106efc;
              }
              plVar11 = pplVar17[3];
              if ((long)plVar11 < 0) {
                plVar9 = pplVar17[2];
                fVar19 = (float)((ulong)plVar11 >> 1 | (ulong)((uint)plVar11 & 1));
                plVar14 = pplVar17[5];
                uVar8 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar19 + fVar19),0)
                ;
                if (-1 < (long)plVar9) goto code_r0x00106f43;
code_r0x00106fca:
                fVar19 = (float)((ulong)plVar9 >> 1 | (ulong)((uint)plVar9 & 1));
                fVar19 = fVar19 + fVar19;
              }
              else {
                plVar14 = pplVar17[5];
                uVar8 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),
                                         (float)(long)plVar11),0);
                plVar9 = pplVar17[2];
                if ((long)plVar9 < 0) goto code_r0x00106fca;
code_r0x00106f43:
                fVar19 = (float)(long)plVar9;
              }
              pplVar7 = pplVar17;
              param_1 = pplVar16;
              if (fVar19 * *(float *)(plVar14 + 1) < (float)uVar8) {
                pplVar18 = pplVar17 + 5;
                check_tuning_isra_0(SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),
                                                     fVar19 * *(float *)(plVar14 + 1)),0),uVar8);
                plVar11 = pplVar17[2];
                plVar14 = pplVar17[5];
                if ((long)plVar11 < 0) {
                  fVar19 = (float)((ulong)plVar11 >> 1 | (ulong)((uint)plVar11 & 1));
                  fVar19 = fVar19 + fVar19;
                }
                else {
                  fVar19 = (float)(long)plVar11;
                }
                auVar21 = SUB1612((undefined  [16])0x0 >> 0x20,0);
                plVar11 = pplVar17[3];
                if ((long)plVar11 < 0) {
                  fVar22 = (float)((ulong)plVar11 >> 1 | (ulong)((uint)plVar11 & 1));
                  uVar8 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar22 + fVar22),
                                 0);
                }
                else {
                  uVar8 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),
                                           (float)(long)plVar11),0);
                }
                if ((float)uVar8 <= *(float *)(plVar14 + 1) * fVar19) goto code_r0x00106f5a;
                fVar19 = fVar19 * *(float *)((long)plVar14 + 0xc);
                if (*(char *)(plVar14 + 2) == '\0') {
                  fVar19 = fVar19 * *(float *)(plVar14 + 1);
                }
                uVar20 = SUB168(CONCAT124(auVar21,fVar19),0);
                if (fVar19 < _UNK_0011001c) {
                  if (_UNK_00110020 <= fVar19) {
                    uVar20 = SUB168(CONCAT124(auVar21,fVar19 - _UNK_00110020),0);
                    pplVar15 = (long **)((long)(fVar19 - _UNK_00110020) ^ 0x8000000000000000);
                  }
                  else {
                    pplVar15 = (long **)(long)fVar19;
                  }
                  pplVar18 = pplVar17;
                  cVar3 = hash_rehash(uVar20,uVar8);
                  if (cVar3 != '\0') {
                    pplVar15 = pplVar16;
                    pplVar18 = pplVar17;
                    lVar6 = hash_find_entry(pplVar17,pplVar16,&pplStack176,0);
                    ppplVar1 = &pplStack176;
                    pplVar2 = pplStack136;
                    if (lVar6 != 0) goto code_r0x0010708d;
                    goto code_r0x00106f5a;
                  }
                }
code_r0x001070c3:
                uVar8 = 0xffffffff;
                goto code_r0x00106efc;
              }
code_r0x00106f5a:
              if (*pplStack176 != (long *)0x0) {
                pplVar7 = (long **)pplVar17[9];
                if (pplVar7 == (long **)0x0) {
                  pplVar18 = (long **)0x10;
                  pplVar7 = (long **)func_0x001023c0();
                  if (pplVar7 == (long **)0x0) goto code_r0x001070c3;
                }
                else {
                  pplVar17[9] = pplVar7[1];
                }
                plVar11 = pplStack176[1];
                *(long ***)pplVar7 = pplVar16;
                pplVar7[1] = plVar11;
                *(long ***)(pplStack176 + 1) = pplVar7;
                uVar8 = 1;
                pplVar17[4] = (long *)((long)pplVar17[4] + 1);
                goto code_r0x00106efc;
              }
            }
            *(long ***)pplStack176 = param_1;
            uVar8 = 1;
            pplVar7[4] = (long *)((long)pplVar7[4] + 1);
            pplVar7[3] = (long *)((long)pplVar7[3] + 1);
code_r0x00106efc:
            if (lStack168 == *(long *)(in_FS_OFFSET + 0x28)) {
              return (long **)uVar8;
            }
            func_0x001021f0();
            lVar6 = *(long *)(in_FS_OFFSET + 0x28);
            pplVar16 = pplVar15;
            iVar5 = hash_insert_if_absent();
            if (iVar5 == -1) {
              pplVar15 = (long **)0x0;
            }
            else {
              if (iVar5 == 0) {
                pplVar15 = pplStack200;
              }
            }
            if (lVar6 != *(long *)(in_FS_OFFSET + 0x28)) {
              func_0x001021f0();
              lVar6 = *(long *)(in_FS_OFFSET + 0x28);
              pplVar17 = pplVar18;
              lVar10 = hash_find_entry();
              if ((lVar10 != 0) &&
                 (pplVar18[4] = (long *)((long)pplVar18[4] + -1), *plStack240 == 0)) {
                plVar11 = (long *)((long)pplVar18[3] - 1);
                pplVar18[3] = plVar11;
                if ((long)plVar11 < 0) {
                  fVar19 = (float)((ulong)plVar11 >> 1 | (ulong)((uint)plVar11 & 1));
                  uVar8 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar19 + fVar19),
                                 0);
                }
                else {
                  uVar8 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),
                                           (float)(long)plVar11),0);
                }
                plVar11 = pplVar18[2];
                if ((long)plVar11 < 0) {
                  fVar19 = (float)((ulong)plVar11 >> 1 | (ulong)((uint)plVar11 & 1));
                  fVar19 = fVar19 + fVar19;
                }
                else {
                  fVar19 = (float)(long)plVar11;
                }
                if ((float)uVar8 < fVar19 * *(float *)pplVar18[5]) {
                  pplVar17 = pplVar18 + 5;
                  check_tuning_isra_0(uVar8,SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0)
                                                             ,fVar19 * *(float *)pplVar18[5]),0));
                  plVar11 = pplVar18[2];
                  plVar14 = pplVar18[5];
                  if ((long)plVar11 < 0) {
                    fVar19 = (float)((ulong)plVar11 >> 1 | (ulong)((uint)plVar11 & 1));
                    fVar19 = fVar19 + fVar19;
                  }
                  else {
                    fVar19 = (float)(long)plVar11;
                  }
                  auVar21 = SUB1612((undefined  [16])0x0 >> 0x20,0);
                  plVar11 = pplVar18[3];
                  if ((long)plVar11 < 0) {
                    fVar22 = (float)((ulong)plVar11 >> 1 | (ulong)((uint)plVar11 & 1));
                    uVar8 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),fVar22 + fVar22
                                            ),0);
                  }
                  else {
                    uVar8 = SUB168(CONCAT124(SUB1612((undefined  [16])0x0 >> 0x20,0),
                                             (float)(long)plVar11),0);
                  }
                  if ((float)uVar8 < *(float *)plVar14 * fVar19) {
                    fVar19 = fVar19 * *(float *)((long)plVar14 + 4);
                    if (*(char *)(plVar14 + 2) == '\0') {
                      fVar19 = fVar19 * *(float *)(plVar14 + 1);
                    }
                    uVar20 = SUB168(CONCAT124(auVar21,fVar19),0);
                    if (_UNK_00110020 <= fVar19) {
                      uVar20 = SUB168(CONCAT124(auVar21,fVar19 - _UNK_00110020),0);
                      pplVar16 = (long **)((long)(fVar19 - _UNK_00110020) ^ 0x8000000000000000);
                    }
                    else {
                      pplVar16 = (long **)(long)fVar19;
                    }
                    pplVar17 = pplVar18;
                    cVar3 = hash_rehash(uVar20,uVar8);
                    if (cVar3 == '\0') {
                      pplVar17 = (long **)pplVar18[9];
                      while (pplVar17 != (long **)0x0) {
                        pplVar17 = (long **)pplVar17[1];
                        func_0x00102070();
                      }
                      pplVar18[9] = (long *)0x0;
                    }
                  }
                }
              }
              if (lVar6 != *(long *)(in_FS_OFFSET + 0x28)) {
                func_0x001021f0();
                uVar12 = hash_pjw(*pplVar17);
                return (long **)((uVar12 ^ (ulong)pplVar17[1]) % (ulong)pplVar16);
              }
              return (long **)lVar10;
            }
            return pplVar15;
          }
          func_0x00102070(plStack120);
          pplVar16 = &plStack120;
        }
        else {
          func_0x00102070(*param_1);
          *param_1 = plStack120;
          param_1[1] = plStack112;
          *(long ***)(param_1 + 2) = pplStack104;
          param_1[3] = plStack96;
          param_1[9] = plStack48;
          pplVar16 = &plStack120;
        }
      }
    }
    if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
      return pplStack152;
    }
    lVar6 = func_0x001021f0();
code_r0x00106e9f:
    bVar13 = true;
  } while( true );
}

