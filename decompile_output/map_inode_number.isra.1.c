
long map_inode_number_isra_1(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if (param_2 - 1U < 0x7ffffffffffffffe) {
    return param_2;
  }
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)ino_map_alloc(0x7fffffffffffffff);
    *(undefined8 **)param_1 = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
      return 0xffffffffffffffff;
    }
  }
  plVar4 = (long *)puVar5[2];
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)func_0x00102780(0x10);
    *(long **)(puVar5 + 2) = plVar4;
    if (plVar4 == (long *)0x0) {
      return 0xffffffffffffffff;
    }
  }
  else {
    if (*plVar4 == param_2) {
      return plVar4[1];
    }
  }
  uVar1 = *puVar5;
  *plVar4 = param_2;
  plVar3 = (long *)hash_insert(uVar1,plVar4);
  if (plVar3 == (long *)0x0) {
    return 0xffffffffffffffff;
  }
  if (plVar4 == plVar3) {
    lVar2 = puVar5[1];
    puVar5[2] = 0;
    puVar5[1] = lVar2 + 1;
    plVar4[1] = lVar2;
    return lVar2;
  }
  lVar2 = plVar3[1];
  plVar4[1] = lVar2;
  return lVar2;
}

