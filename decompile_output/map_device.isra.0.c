
long map_device_isra_0(undefined8 param_1,long **param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *param_2;
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)func_0x00102780(0x10);
    *param_2 = plVar3;
    if (plVar3 == (long *)0x0) {
      return 0;
    }
  }
  else {
    if (*plVar3 == param_3) {
      return plVar3[1];
    }
  }
  *plVar3 = param_3;
  plVar1 = (long *)hash_insert(param_1,plVar3);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (plVar3 == plVar1) {
    *param_2 = (long *)0x0;
    lVar2 = hash_initialize(0x3fd,0,di_ino_hash,0,0);
    plVar3[1] = lVar2;
    return lVar2;
  }
  lVar2 = plVar1[1];
  plVar3[1] = lVar2;
  return lVar2;
}

