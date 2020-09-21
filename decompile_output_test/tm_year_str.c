
undefined8 tm_year_str(int param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1 / 100 + 0x13;
  uVar2 = param_1 % 100 >> 0x1f;
  uVar1 = (int)uVar3 >> 0x1f;
  func_0x00102b50(param_2,1,0xffffffffffffffff,&UNK_00113003 + (-0x76d < param_1),
                  (ulong)((uVar3 ^ uVar1) - uVar1),(ulong)((param_1 % 100 ^ uVar2) - uVar2));
  return param_2;
}

