
undefined * extract_trimmed_name(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)xmalloc(0x21);
  func_0x00101850(puVar1,param_1 + 0x2c,0x20);
  puVar1[0x20] = 0;
  lVar2 = func_0x00101910(puVar1);
  puVar3 = puVar1 + lVar2;
  if (puVar1 < puVar3) {
    do {
      if (puVar3[-1] != ' ') {
        return puVar1;
      }
      puVar3 = puVar3 + -1;
      *puVar3 = 0;
    } while (puVar1 != puVar3);
  }
  return puVar1;
}

