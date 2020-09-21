
long safe_hasher(long *param_1,long param_2,undefined8 param_3,char param_4)

{
  undefined auVar1 [16];
  undefined8 *puVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long **extraout_RDX;
  long lVar7;
  long lVar8;
  
  lVar7 = param_1[2];
  uVar4 = (*(code *)param_1[6])();
  if (uVar4 <= (ulong)param_1[2] && param_1[2] != uVar4) {
    return uVar4 * 0x10 + *param_1;
  }
  func_0x001020a0();
  plVar5 = (long *)safe_hasher();
  *extraout_RDX = plVar5;
  lVar8 = *plVar5;
  if (lVar8 == 0) {
    return 0;
  }
  if (lVar8 != lVar7) {
    cVar3 = (**(code **)(param_2 + 0x38))(lVar7);
    if (cVar3 == '\0') {
      plVar6 = (long *)plVar5[1];
      if (plVar6 == (long *)0x0) {
        return 0;
      }
      lVar8 = *plVar6;
      do {
        if (lVar7 == lVar8) {
code_r0x0010624c:
          if (param_4 == '\0') {
            return lVar8;
          }
          plVar5[1] = plVar6[1];
          *plVar6 = 0;
          plVar6[1] = *(long *)(param_2 + 0x48);
          *(long **)(param_2 + 0x48) = plVar6;
          return lVar8;
        }
        cVar3 = (**(code **)(param_2 + 0x38))(lVar7);
        if (cVar3 != '\0') {
          plVar6 = (long *)plVar5[1];
          lVar8 = *plVar6;
          goto code_r0x0010624c;
        }
        plVar5 = (long *)plVar5[1];
        plVar6 = (long *)plVar5[1];
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        lVar8 = *plVar6;
      } while( true );
    }
    lVar8 = *plVar5;
  }
  if (param_4 != '\0') {
    puVar2 = (undefined8 *)plVar5[1];
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Load size is inaccurate */
      auVar1 = *(undefined *)puVar2;
      *(int *)plVar5 = SUB164(auVar1,0);
      *(undefined4 *)((long)plVar5 + 4) = SUB164(auVar1 >> 0x20,0);
      *(int *)(plVar5 + 1) = SUB164(auVar1 >> 0x40,0);
      *(undefined4 *)((long)plVar5 + 0xc) = SUB164(auVar1 >> 0x60,0);
      *puVar2 = 0;
      puVar2[1] = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 **)(param_2 + 0x48) = puVar2;
      return lVar8;
    }
    *plVar5 = 0;
  }
  return lVar8;
}

