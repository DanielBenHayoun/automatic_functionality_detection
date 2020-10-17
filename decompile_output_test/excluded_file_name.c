
ulong excluded_file_name(long **param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  bool bVar11;
  
  plVar9 = *param_1;
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  lVar6 = 0;
  if (*(int *)(plVar9 + 1) != 0) goto code_r0x001056eb;
  do {
    if (lVar6 == 0) {
      lVar6 = func_0x00102530(param_2);
      lVar6 = xmalloc(lVar6 + 1);
    }
    uVar7 = *(uint *)((long)plVar9 + 0xc);
    lVar1 = plVar9[2];
    lVar5 = param_2;
    do {
      func_0x00102450(lVar6,lVar5);
      lVar3 = hash_lookup(lVar1,lVar6);
      while( true ) {
        if (lVar3 != 0) goto code_r0x00105672;
        if (((uVar7 & 8) == 0) ||
           (puVar4 = (undefined *)func_0x001025d0(lVar6,0x2f), puVar4 == (undefined *)0x0)) break;
        *puVar4 = 0;
        lVar3 = hash_lookup(lVar1,lVar6);
      }
      plVar10 = plVar9;
    } while (((uVar7 & 0x40000000) == 0) &&
            ((lVar5 = func_0x001025a0(lVar5,0x2f), lVar5 != 0 && (lVar5 = lVar5 + 1, lVar5 != 0))));
    while( true ) {
      plVar9 = (long *)*plVar10;
      if (plVar9 == (long *)0x0) {
        uVar7 = 1;
        goto code_r0x00105674;
      }
      if (*(int *)(plVar9 + 1) == 0) break;
code_r0x001056eb:
      lVar1 = plVar9[4];
      plVar10 = plVar9;
      if (lVar1 != 0) {
        puVar8 = (undefined8 *)(plVar9[2] + 8);
        lVar5 = 0;
        do {
          if ((*(uint *)(puVar8 + -1) & 0x8000000) == 0) {
            bVar11 = (bool)exclude_fnmatch(*puVar8,param_2);
          }
          else {
            iVar2 = rpl_regexec(puVar8,param_2,0,0,0);
            bVar11 = iVar2 == 0;
          }
          if (bVar11 != false) goto code_r0x00105672;
          lVar5 = lVar5 + 1;
          puVar8 = puVar8 + 9;
        } while (lVar1 != lVar5);
      }
    }
  } while( true );
code_r0x00105672:
  uVar7 = 0;
  plVar10 = plVar9;
code_r0x00105674:
  func_0x00102a10(lVar6);
  return (ulong)((*(uint *)((long)plVar10 + 0xc) >> 0x1d ^ 1) & 1 ^ uVar7);
}

