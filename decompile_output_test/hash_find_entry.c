
long hash_find_entry(long param_1,long param_2,long **param_3,char param_4)

{
  undefined auVar1 [16];
  undefined8 *puVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = (long *)safe_hasher();
  *param_3 = plVar4;
  lVar6 = *plVar4;
  if (lVar6 == 0) {
    return 0;
  }
  if (lVar6 != param_2) {
    cVar3 = (**(code **)(param_1 + 0x38))(param_2);
    if (cVar3 == '\0') {
      plVar5 = (long *)plVar4[1];
      if (plVar5 == (long *)0x0) {
        return 0;
      }
      lVar6 = *plVar5;
      do {
        if (param_2 == lVar6) {
code_r0x0010d8bc:
          if (param_4 == '\0') {
            return lVar6;
          }
          plVar4[1] = plVar5[1];
          *plVar5 = 0;
          plVar5[1] = *(long *)(param_1 + 0x48);
          *(long **)(param_1 + 0x48) = plVar5;
          return lVar6;
        }
        cVar3 = (**(code **)(param_1 + 0x38))(param_2);
        if (cVar3 != '\0') {
          plVar5 = (long *)plVar4[1];
          lVar6 = *plVar5;
          goto code_r0x0010d8bc;
        }
        plVar4 = (long *)plVar4[1];
        plVar5 = (long *)plVar4[1];
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        lVar6 = *plVar5;
      } while( true );
    }
    lVar6 = *plVar4;
  }
  if (param_4 != '\0') {
    puVar2 = (undefined8 *)plVar4[1];
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Load size is inaccurate */
      auVar1 = *(undefined *)puVar2;
      *(int *)plVar4 = SUB164(auVar1,0);
      *(undefined4 *)((long)plVar4 + 4) = SUB164(auVar1 >> 0x20,0);
      *(int *)(plVar4 + 1) = SUB164(auVar1 >> 0x40,0);
      *(undefined4 *)((long)plVar4 + 0xc) = SUB164(auVar1 >> 0x60,0);
      *puVar2 = 0;
      puVar2[1] = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 **)(param_1 + 0x48) = puVar2;
      return lVar6;
    }
    *plVar4 = 0;
  }
  return lVar6;
}

