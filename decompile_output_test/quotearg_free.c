
void quotearg_free(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = slotvec;
  if (1 < nslots) {
    puVar4 = (undefined8 *)(slotvec + 0x18);
    puVar1 = (undefined8 *)(slotvec + (ulong)(nslots - 2) * 0x10 + 0x28);
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 2;
      func_0x001011e0(uVar2);
    } while (puVar4 != puVar1);
  }
  if (*(undefined1 **)(puVar3 + 8) != slot0) {
    func_0x001011e0();
    slotvec0._0_8_ = 0x100;
    slotvec0._8_8_ = slot0;
  }
  if (puVar3 != slotvec0) {
    func_0x001011e0(puVar3);
    slotvec = slotvec0;
  }
  nslots = 1;
  return;
}

