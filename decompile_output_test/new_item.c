
long * new_item(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)xmalloc(0x38);
  if (param_1 != 0) {
    param_1 = xstrdup(param_1);
  }
  *plVar1 = param_1;
  plVar1[2] = 0;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  plVar1[4] = 0;
  plVar1[5] = 0;
  plVar1[6] = 0;
  return plVar1;
}

