
ulong set_quoting_flags(undefined1 *param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (param_1 == (undefined1 *)0x0) {
    param_1 = default_quoting_options;
  }
  uVar1 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return (ulong)uVar1;
}

