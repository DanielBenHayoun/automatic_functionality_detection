
undefined8 transfer_entries(long param_1,long **param_2,char param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *param_2;
  if (plVar5 < param_2[1]) {
    do {
      lVar6 = *plVar5;
      if (lVar6 != 0) {
        plVar4 = (long *)plVar5[1];
        if ((long *)plVar5[1] != (long *)0x0) {
          do {
            while( true ) {
              lVar6 = *plVar4;
              plVar2 = (long *)safe_hasher(param_1,lVar6);
              plVar3 = (long *)plVar4[1];
              if (*plVar2 != 0) break;
              *plVar2 = lVar6;
              *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
              *plVar4 = 0;
              plVar4[1] = *(long *)(param_1 + 0x48);
              *(long **)(param_1 + 0x48) = plVar4;
              plVar4 = plVar3;
              if (plVar3 == (long *)0x0) goto code_r0x0010da67;
            }
            plVar4[1] = plVar2[1];
            *(long **)(plVar2 + 1) = plVar4;
            plVar4 = plVar3;
          } while (plVar3 != (long *)0x0);
code_r0x0010da67:
          lVar6 = *plVar5;
        }
        plVar5[1] = 0;
        if (param_3 == '\0') {
          plVar4 = (long *)safe_hasher(param_1,lVar6);
          if (*plVar4 == 0) {
            *plVar4 = lVar6;
            *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          }
          else {
            plVar3 = *(long **)(param_1 + 0x48);
            if (plVar3 == (long *)0x0) {
              plVar3 = (long *)func_0x00103888(0x10);
              if (plVar3 == (long *)0x0) {
                return 0;
              }
            }
            else {
              *(long *)(param_1 + 0x48) = plVar3[1];
            }
            lVar1 = plVar4[1];
            *plVar3 = lVar6;
            plVar3[1] = lVar1;
            *(long **)(plVar4 + 1) = plVar3;
          }
          *plVar5 = 0;
          param_2[3] = (long *)((long)param_2[3] + -1);
        }
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 <= param_2[1] && param_2[1] != plVar5);
  }
  return 1;
}

