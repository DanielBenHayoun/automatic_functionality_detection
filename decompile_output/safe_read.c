
long safe_read(uint param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  int *piVar2;
  
  while( true ) {
    do {
      lVar1 = func_0x00101b80((ulong)param_1,param_2,param_3);
      if (-1 < lVar1) {
        return lVar1;
      }
      piVar2 = (int *)func_0x001019f0();
    } while (*piVar2 == 4);
    if (param_3 < 0x7ff00001) break;
    if (*piVar2 != 0x16) {
      return lVar1;
    }
    param_3 = 0x7ff00000;
  }
  return lVar1;
}

