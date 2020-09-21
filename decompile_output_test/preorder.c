
void preorder(long *param_1,code *param_2,undefined8 param_3)

{
  long **pplVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  
  do {
    do {
      iVar3 = (*param_2)(param_3,param_1);
      if (iVar3 != 0) {
        return;
      }
      pplVar1 = (long **)(param_1 + 1);
      plVar4 = (long *)0x0;
      plVar5 = param_1;
      param_1 = *pplVar1;
    } while (*pplVar1 != (long *)0x0);
    while ((param_1 = (long *)plVar5[2], param_1 == plVar4 || (param_1 == (long *)0x0))) {
      plVar2 = (long *)*plVar5;
      plVar4 = plVar5;
      plVar5 = plVar2;
      if (plVar2 == (long *)0x0) {
        return;
      }
    }
  } while( true );
}

