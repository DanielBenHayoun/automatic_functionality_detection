
long adjust_column(ulong param_1,char param_2)

{
  long lVar1;
  
  if (count_bytes == '\0') {
    if (param_2 == '\b') {
      lVar1 = 0;
      if (param_1 != 0) {
        lVar1 = param_1 - 1;
      }
      return lVar1;
    }
    if (param_2 == '\r') {
      return 0;
    }
    if (param_2 == '\t') {
      return (param_1 & 0xfffffffffffffff8) + 8;
    }
  }
  return param_1 + 1;
}

