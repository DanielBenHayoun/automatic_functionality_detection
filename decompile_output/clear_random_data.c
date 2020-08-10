
ulong clear_random_data(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar2 = randint_source;
  uVar3 = randread_free(*randint_source);
  puVar4 = (undefined4 *)func_0x00101c70();
  uVar1 = *puVar4;
  func_0x00102040(puVar2,0x18,0xffffffffffffffff);
  func_0x00101c50(puVar2);
  *puVar4 = uVar1;
  return (ulong)uVar3;
}

