
undefined8 scan_zeros(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = zeros;
  plVar2 = head;
  if (((param_1[4] == 0) && (*param_1 != 0)) &&
     (plVar1 = param_1, plVar2 = param_1, head != (long *)0x0)) {
    *(long **)(zeros + 5) = param_1;
    plVar1 = param_1;
    plVar2 = head;
  }
  head = plVar2;
  zeros = plVar1;
  return 0;
}

