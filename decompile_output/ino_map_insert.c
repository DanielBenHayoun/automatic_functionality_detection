
long ino_map_insert(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)func_0x00102780(0x10);
    *(long **)(param_1 + 2) = plVar4;
    if (plVar4 == (long *)0x0) {
      return 0xffffffffffffffff;
    }
  }
  else {
    if (*plVar4 == param_2) {
      return plVar4[1];
    }
  }
  uVar1 = *param_1;
  *plVar4 = param_2;
  plVar3 = (long *)hash_insert(uVar1,plVar4);
  if (plVar3 == (long *)0x0) {
    return 0xffffffffffffffff;
  }
  if (plVar4 == plVar3) {
    lVar2 = param_1[1];
    param_1[2] = 0;
    param_1[1] = lVar2 + 1;
    plVar4[1] = lVar2;
    return lVar2;
  }
  lVar2 = plVar3[1];
  plVar4[1] = lVar2;
  return lVar2;
}

