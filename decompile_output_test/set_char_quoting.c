
ulong set_char_quoting(undefined1 *param_1,byte param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined1 *)0x0) {
    param_1 = default_quoting_options;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       (((uint)param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return (ulong)(uVar2 & 1);
}

