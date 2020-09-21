
ulong parse_datetime(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = func_0x00102730(&UNK_0011178e);
  lVar3 = tzalloc(uVar2);
  uVar4 = 0;
  if (lVar3 != 0) {
    bVar1 = parse_datetime2(param_1,param_2,param_3,0,lVar3,uVar2);
    tzfree(lVar3);
    uVar4 = (ulong)bVar1;
  }
  return uVar4;
}

