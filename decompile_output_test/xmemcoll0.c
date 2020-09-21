
ulong xmemcoll0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = memcoll0();
  puVar2 = (uint *)func_0x00101790();
  if (*puVar2 != 0) {
    collate_error((ulong)*puVar2,param_1,param_2 + -1,param_3,param_4 + -1);
  }
  return (ulong)uVar1;
}

