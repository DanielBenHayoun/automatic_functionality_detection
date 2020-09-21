
ulong randint_all_free(undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = randread_free(*param_1);
  puVar3 = (undefined4 *)func_0x001019b0();
  uVar1 = *puVar3;
  func_0x00101d00(param_1,0x18,0xffffffffffffffff);
  func_0x00101dd0(param_1);
  *puVar3 = uVar1;
  return (ulong)uVar2;
}

