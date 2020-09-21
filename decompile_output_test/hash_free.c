
/* WARNING: Possible PIC construction at 0x00106c14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00106c55: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00106c19) */
/* WARNING: Removing unreachable block (ram,0x00106c5a) */

void hash_free(long **param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *param_1;
  plVar1 = param_1[1];
  if ((param_1[8] != (long *)0x0) && (param_1[4] != (long *)0x0)) {
    if (plVar1 <= plVar3) goto code_r0x00106c2c;
    do {
      lVar4 = *plVar3;
      plVar2 = plVar3;
      if (lVar4 != 0) {
        while( true ) {
          (*(code *)param_1[8])(lVar4);
          plVar2 = (long *)plVar2[1];
          if (plVar2 == (long *)0x0) break;
          lVar4 = *plVar2;
        }
        plVar1 = param_1[1];
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 < plVar1);
    plVar3 = *param_1;
  }
  if (plVar3 < plVar1) {
    do {
      plVar1 = (long *)plVar3[1];
      if (plVar1 != (long *)0x0) goto code_r0x00102070;
      plVar3 = plVar3 + 2;
    } while (plVar3 <= param_1[1] && param_1[1] != plVar3);
  }
code_r0x00106c2c:
  plVar3 = param_1[9];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)plVar3[1];
    func_0x00102070();
  }
  plVar1 = *param_1;
code_r0x00102070:
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_00313d30)(plVar1);
  return;
}

