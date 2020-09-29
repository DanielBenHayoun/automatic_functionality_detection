
ulong dir_name(char *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = mdir_name();
  if (lVar2 != 0) {
    return lVar2;
  }
  xalloc_die();
  cVar1 = *param_1;
  lVar2 = last_component();
  uVar3 = lVar2 - (long)param_1;
  if (((ulong)(cVar1 == '/') < uVar3) && (*(char *)(lVar2 + -1) == '/')) {
    do {
      uVar4 = uVar3 - 1;
      if ((ulong)(cVar1 == '/') == uVar4) {
        return uVar4;
      }
      lVar2 = uVar3 - 2;
      uVar3 = uVar4;
    } while (param_1[lVar2] == '/');
    return uVar4;
  }
  return uVar3;
}

