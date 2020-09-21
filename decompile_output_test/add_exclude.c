
/* WARNING: Possible PIC construction at 0x00105add: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00105ae2) */

void add_exclude(long **param_1,long *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  char *pcVar5;
  long *plVar6;
  code *pcVar7;
  char *pcVar8;
  long **pplVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  long *unaff_R14;
  long *plVar14;
  bool bVar15;
  
  pplVar9 = (long **)*param_1;
  if (((param_3 & 0x18000000) == 0) ||
     (cVar1 = fnmatch_pattern_has_wildcards(param_2), cVar1 == '\0')) {
    if ((pplVar9 == (long **)0x0) ||
       ((*(int *)(pplVar9 + 1) != 0 ||
        (((*(uint *)((long)pplVar9 + 0xc) ^ param_3) & 0x60000018) != 0)))) {
      pplVar9 = (long **)xzalloc(0x28);
      *(undefined4 *)(pplVar9 + 1) = 0;
      *(uint *)((long)pplVar9 + 0xc) = param_3;
      pcVar4 = string_compare;
      bVar15 = (param_3 & 0x10) != 0;
      if (bVar15) {
        pcVar4 = string_compare_ci;
      }
      pcVar7 = string_hasher;
      if (bVar15) {
        pcVar7 = string_hasher_ci;
      }
      plVar6 = (long *)hash_initialize(0,0,pcVar7,pcVar4,string_free);
      pplVar9[2] = plVar6;
      plVar6 = *param_1;
      *(long ***)param_1 = pplVar9;
      *pplVar9 = plVar6;
    }
    pcVar12 = (char *)xstrdup(param_2);
    pcVar5 = pcVar12;
    pcVar8 = pcVar12;
    if ((param_3 & 0x10000002) == 0x10000000) {
      do {
        cVar1 = *pcVar8;
        pcVar11 = pcVar8 + 1;
        if (cVar1 == '\\') {
          if (pcVar8[1] != '\0') {
            cVar1 = pcVar8[1];
            pcVar11 = pcVar8 + 2;
            goto code_r0x00105960;
          }
          *pcVar5 = '\\';
        }
        else {
code_r0x00105960:
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
        }
        pcVar5 = pcVar5 + 1;
        pcVar8 = pcVar11;
      } while( true );
    }
    pcVar5 = (char *)hash_insert(pplVar9[2],pcVar12);
    if (pcVar12 == pcVar5) {
      return;
    }
    goto code_r0x00102a10;
  }
  if (((pplVar9 == (long **)0x0) || (*(int *)(pplVar9 + 1) != 1)) ||
     (((*(uint *)((long)pplVar9 + 0xc) ^ param_3) & 0x20000000) != 0)) {
    pplVar9 = (long **)xzalloc(0x28);
    *(undefined4 *)(pplVar9 + 1) = 1;
    *(uint *)((long)pplVar9 + 0xc) = param_3;
    plVar6 = *param_1;
    *(long ***)param_1 = pplVar9;
    *pplVar9 = plVar6;
  }
  plVar6 = pplVar9[4];
  plVar13 = pplVar9[2];
  if (plVar6 == pplVar9[3]) {
    if (plVar13 == (long *)0x0) {
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x1;
      }
      if (SUB168(ZEXT816(0x48) * ZEXT816(plVar6) >> 0x40,0) == 0) goto code_r0x00105a1f;
    }
    else {
      if (plVar6 < (long *)0x12f684bda12f684) {
        plVar6 = (long *)((long)plVar6 + ((ulong)plVar6 >> 1) + 1);
code_r0x00105a1f:
        pplVar9[3] = plVar6;
        plVar13 = (long *)xrealloc(plVar13,(long)plVar6 * 0x48);
        plVar6 = pplVar9[4];
        pplVar9[2] = plVar13;
        goto code_r0x001057fa;
      }
    }
    xalloc_die();
  }
  else {
code_r0x001057fa:
    plVar14 = (long *)((long)plVar6 + 1);
    unaff_R14 = plVar13 + (long)plVar6 * 9;
    pplVar9[4] = plVar14;
    *(uint *)unaff_R14 = param_3;
    if ((param_3 & 0x8000000) == 0) {
      if ((param_3 & 0x4000000) != 0) {
        param_2 = (long *)xstrdup(param_2);
        pplVar9 = (long **)xmalloc(0x10);
        plVar6 = param_1[1];
        pplVar9[1] = param_2;
        *(long ***)(param_1 + 1) = pplVar9;
        *pplVar9 = plVar6;
      }
      *(long **)(unaff_R14 + 1) = param_2;
      return;
    }
    param_1 = (long **)(ulong)((int)param_3 >> 3 & 2U | 9);
    if ((param_3 & 8) != 0) {
      lVar3 = func_0x00102530(param_2);
      if (lVar3 != 0) {
        cVar1 = *(char *)((long)param_2 + lVar3 + -1);
        while (cVar1 == '/') {
          if (lVar3 + -1 == 0) goto code_r0x00105868;
          cVar1 = *(char *)((long)param_2 + lVar3 + -2);
          lVar3 = lVar3 + -1;
        }
        pcVar12 = (char *)xmalloc(lVar3 + 7);
        puVar10 = (undefined4 *)(pcVar12 + lVar3);
        func_0x00102710(pcVar12,param_2,lVar3);
        *puVar10 = 0x2a2e2f28;
        *(undefined2 *)(puVar10 + 1) = 0x3f29;
        *(undefined *)((long)puVar10 + 6) = 0;
        rpl_regcomp(unaff_R14 + 1,pcVar12,param_1);
code_r0x00102a10:
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR_free_00327fc8)(pcVar12);
        return;
      }
      goto code_r0x00105868;
    }
  }
  iVar2 = rpl_regcomp(unaff_R14 + 1,param_2,(ulong)param_1 & 0xffffffff);
  if (iVar2 == 0) {
    return;
  }
  plVar14 = pplVar9[4];
code_r0x00105868:
  pplVar9[4] = (long *)((long)plVar14 + -1);
  return;
}

