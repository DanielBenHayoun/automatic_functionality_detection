
ulong can_write_any_file(void)

{
  ulong uVar1;
  
  if (initialized_3064 != '\0') {
    return (ulong)can_write_3065;
  }
  uVar1 = func_0x00101b40();
  can_write_3065 = (int)uVar1 == 0;
  initialized_3064 = 1;
  return uVar1 & 0xffffffffffffff00 | (ulong)can_write_3065;
}

