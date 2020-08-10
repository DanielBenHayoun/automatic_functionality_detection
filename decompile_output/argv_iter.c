
long argv_iter(long *param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  if (*param_1 != 0) {
    lVar3 = func_0x00101da0(param_1 + 2,param_1 + 3,0);
    if (lVar3 < 0) {
      iVar2 = func_0x00101be0(*param_1);
      *param_2 = (-(uint)(iVar2 == 0) & 2) + 2;
      lVar3 = 0;
    }
    else {
      *param_2 = 1;
      param_1[1] = param_1[1] + 1;
      lVar3 = param_1[2];
    }
    return lVar3;
  }
  plVar1 = (long *)param_1[5];
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    *param_2 = 1;
    *(long **)(param_1 + 5) = plVar1 + 1;
    return lVar3;
  }
  *param_2 = 2;
  return lVar3;
}

