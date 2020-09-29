
long memcpy_lowcase(long param_1,long param_2,long param_3)

{
  long *plVar1;
  
  if (param_3 != 0) {
    param_3 = param_3 + -1;
    plVar1 = (long *)func_0x00102b20();
    do {
      *(undefined *)(param_1 + param_3) =
           (char)*(undefined4 *)(*plVar1 + (ulong)*(byte *)(param_2 + param_3) * 4);
      param_3 = param_3 + -1;
    } while (param_3 != -1);
  }
  return param_1;
}

