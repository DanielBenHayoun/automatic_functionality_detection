
undefined8 mark_opt_subexp(long param_1,long param_2)

{
  if ((*(char *)(param_2 + 0x30) == '\x11') && (param_1 == *(long *)(param_2 + 0x28))) {
    *(byte *)(param_2 + 0x32) = *(byte *)(param_2 + 0x32) | 8;
    return 0;
  }
  return 0;
}

