
ulong writable_destination(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  
  if (((uint)param_2 & 0xf000) == 0xa000) {
    return 1;
  }
  cVar1 = can_write_any_file();
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = func_0x00102ba0(param_1,2);
  return uVar2 & 0xffffffffffffff00 | (ulong)((int)uVar2 == 0);
}

