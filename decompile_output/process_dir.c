
ulong process_dir(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 *puVar3;
  
  lVar1 = *param_3;
  if ((*(char *)((long)param_3 + 0x14) != '\0') && (lVar1 == 0)) {
    puVar3 = (undefined4 *)func_0x00101750();
    *puVar3 = 0x5f;
  }
  bVar2 = make_dir_parents(param_1,param_2,lVar1,param_3,(ulong)*(uint *)((long)param_3 + 0xc),
                           announce_mkdir,(ulong)*(uint *)(param_3 + 2),0xffffffffffffffff,
                           0xffffffffffffffff,1);
  if ((((bVar2 ^ 1) == 0) && (*(char *)((long)param_3 + 0x14) != '\0')) && (*param_3 != 0)) {
    puVar3 = (undefined4 *)func_0x00101750();
    *puVar3 = 0x5f;
  }
  return (ulong)(bVar2 ^ 1);
}

