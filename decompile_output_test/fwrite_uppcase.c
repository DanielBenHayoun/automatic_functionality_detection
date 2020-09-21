
void fwrite_uppcase(undefined8 param_1,byte *param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  byte *pbVar3;
  
  if (param_3 != 0) {
    pbVar3 = param_2 + param_3;
    plVar2 = (long *)func_0x00101820();
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      func_0x00101a10((ulong)*(uint *)(*plVar2 + (ulong)bVar1 * 4),param_1);
    } while (param_2 != pbVar3);
    return;
  }
  return;
}

