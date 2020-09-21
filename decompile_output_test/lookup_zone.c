
long * lookup_zone(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined *puVar5;
  
  puVar5 = &UNK_0011301d;
  puVar3 = universal_time_zone_table;
  do {
    iVar2 = func_0x00102960(param_2,puVar5);
    if (iVar2 == 0) {
      return (undefined8 *)puVar3;
    }
    puVar3 = (undefined1 *)((undefined8 *)puVar3 + 2);
    puVar5 = *(undefined **)puVar3;
  } while (puVar5 != (undefined *)0x0);
  lVar1 = *(long *)(param_1 + 0xe8);
  plVar4 = (long *)(param_1 + 0xe8);
  while (lVar1 != 0) {
    iVar2 = func_0x00102960(param_2);
    if (iVar2 == 0) {
      return plVar4;
    }
    plVar4 = plVar4 + 2;
    lVar1 = *plVar4;
  }
  puVar3 = time_zone_table;
  puVar5 = &UNK_00113021;
  do {
    iVar2 = func_0x00102960(param_2,puVar5);
    if (iVar2 == 0) {
      return (undefined8 *)puVar3;
    }
    puVar3 = (undefined1 *)((undefined8 *)puVar3 + 2);
    puVar5 = *(undefined **)puVar3;
  } while (puVar5 != (undefined *)0x0);
  return (long *)0;
}

