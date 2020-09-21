
undefined8 recurse_tree(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  char cVar1;
  undefined8 uVar2;
  
  while( true ) {
    if (*(long *)(param_1 + 8) == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00101fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1);
        return uVar2;
      }
    }
    else {
      cVar1 = recurse_tree(*(long *)(param_1 + 8),UNRECOVERED_JUMPTABLE);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1);
    if ((char)uVar2 != '\0') break;
    param_1 = *(long *)(param_1 + 0x10);
    if (param_1 == 0) {
      return uVar2;
    }
  }
  return 1;
}

