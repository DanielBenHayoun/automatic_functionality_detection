
void postorder(long *param_1,code *param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  
  do {
    do {
      do {
        plVar3 = param_1;
        param_1 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
      param_1 = (long *)plVar3[2];
    } while ((long *)plVar3[2] != (long *)0x0);
    iVar2 = (*param_2)(param_3);
    while( true ) {
      if ((iVar2 != 0) || (plVar1 = (long *)*plVar3, plVar1 == (long *)0x0)) {
        return;
      }
      param_1 = (long *)plVar1[2];
      if (param_1 != plVar3 && param_1 != (long *)0x0) break;
      iVar2 = (*param_2)(param_3);
      plVar3 = plVar1;
    }
  } while( true );
}

