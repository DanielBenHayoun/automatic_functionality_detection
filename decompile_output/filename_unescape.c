
long filename_unescape(long param_1,ulong param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar4 = 0;
  puVar2 = (undefined *)(param_1 + 1);
  if (param_2 != 0) {
    do {
      puVar3 = puVar2;
      cVar1 = *(char *)(param_1 + uVar4);
      if (cVar1 == '\0') {
        return 0;
      }
      if (cVar1 == '\\') {
        if (param_2 - 1 == uVar4) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        if (*(char *)(param_1 + uVar4) == '\\') {
          puVar3[-1] = 0x5c;
        }
        else {
          if (*(char *)(param_1 + uVar4) != 'n') {
            return 0;
          }
          puVar3[-1] = 10;
        }
      }
      else {
        puVar3[-1] = cVar1;
      }
      uVar4 = uVar4 + 1;
      puVar2 = puVar3 + 1;
    } while (uVar4 < param_2);
    if (puVar3 < (undefined *)(param_2 + param_1)) {
      *puVar3 = 0;
    }
  }
  return param_1;
}

