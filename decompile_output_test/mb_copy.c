
void mb_copy(long *param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)*param_2;
  lVar4 = param_2[1];
  if (plVar2 == param_2 + 3) {
    lVar3 = func_0x00101bf0(param_1 + 3,plVar2,lVar4,param_1 + 3);
    lVar4 = param_2[1];
    *param_1 = lVar3;
  }
  else {
    *(long **)param_1 = plVar2;
  }
  cVar1 = *(char *)(param_2 + 2);
  param_1[1] = lVar4;
  *(char *)(param_1 + 2) = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  }
  return;
}

