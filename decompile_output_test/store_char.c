
void store_char(undefined param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)buff_current;
  if (buff_allocated <= uVar1) {
    buff = x2realloc(buff,&buff_allocated);
    uVar1 = (ulong)buff_current;
  }
  *(undefined *)(buff + uVar1) = param_1;
  buff_current = buff_current + 1;
  return;
}

