
long argmatch_to_argument(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    param_2 = param_2 + 1;
    do {
      iVar1 = func_0x00102910(param_1,param_3,param_4);
      if (iVar1 == 0) {
        return lVar2;
      }
      lVar2 = *param_2;
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
    } while (lVar2 != 0);
  }
  return lVar2;
}

