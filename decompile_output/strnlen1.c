
long strnlen1(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = func_0x00101780(param_1,0,param_2);
  if (lVar1 != 0) {
    param_2 = (lVar1 - param_1) + 1;
  }
  return param_2;
}

