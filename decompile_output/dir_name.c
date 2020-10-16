
ulong dir_name(char *param_1,ulong param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = mdir_name();
  if (lVar2 != 0) {
    return lVar2;
  }
  xalloc_die();
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    uVar3 = 0;
    do {
      param_1 = param_1 + 1;
      uVar3 = (uVar3 << 9 | uVar3 >> 0x37) + (long)cVar1;
      cVar1 = *param_1;
    } while (cVar1 != '\0');
    return uVar3 % param_2;
  }
  return 0;
}

