
ulong xmemcoll(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = memcoll();
  puVar2 = (uint *)func_0x00101790();
  if (*puVar2 != 0) {
    collate_error((ulong)*puVar2,param_1,param_2,param_3,param_4);
  }
  return (ulong)uVar1;
}

