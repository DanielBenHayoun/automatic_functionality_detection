
ulong string_to_baud(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = &UNK_0010b6b6;
  iVar3 = 0;
  puVar2 = (undefined8 *)(speeds + 0x18);
  do {
    iVar1 = func_0x00102620(param_1,puVar4);
    if (iVar1 == 0) {
      return (ulong)*(uint *)(speeds + (long)iVar3 * 0x18 + 8);
    }
    puVar4 = (undefined *)*puVar2;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 3;
  } while (puVar4 != (undefined *)0x0);
  return 0xffffffff;
}

