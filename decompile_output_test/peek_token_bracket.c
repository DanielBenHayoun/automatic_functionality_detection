
undefined8 peek_token_bracket(char *param_1,long param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_2 + 0x48);
  if (*(long *)(param_2 + 0x68) == lVar3 || *(long *)(param_2 + 0x68) < lVar3) {
    param_1[8] = '\x02';
    return 0;
  }
  lVar4 = *(long *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0x90);
  cVar1 = *(char *)(lVar4 + lVar3);
  *param_1 = cVar1;
  if (((iVar2 < 2) || (lVar3 == *(long *)(param_2 + 0x30))) ||
     (*(int *)(*(long *)(param_2 + 0x10) + lVar3 * 4) != -1)) {
    if (cVar1 == '\\') {
      if (((param_3 & 1) != 0) && (lVar3 + 1 < *(long *)(param_2 + 0x58))) {
        *(long *)(param_2 + 0x48) = lVar3 + 1;
        cVar1 = *(char *)(lVar4 + 1 + lVar3);
        param_1[8] = '\x01';
        *param_1 = cVar1;
        return 1;
      }
    }
    else {
      if (cVar1 == '[') {
        if (lVar3 + 1 < *(long *)(param_2 + 0x58)) {
          cVar1 = *(char *)(lVar4 + 1 + lVar3);
          *param_1 = cVar1;
          if (cVar1 == ':') {
            if ((param_3 & 4) != 0) {
              param_1[8] = '\x1e';
              return 2;
            }
          }
          else {
            if (cVar1 == '=') {
              param_1[8] = '\x1c';
              return 2;
            }
            if (cVar1 == '.') {
              param_1[8] = '\x1a';
              return 2;
            }
          }
        }
        param_1[8] = '\x01';
        *param_1 = '[';
        return 1;
      }
      if (cVar1 == ']') {
        param_1[8] = '\x15';
        return 1;
      }
      if (cVar1 == '^') {
        param_1[8] = '\x19';
        return 1;
      }
      if (cVar1 == '-') {
        param_1[8] = '\x16';
        return 1;
      }
    }
  }
  param_1[8] = '\x01';
  return 1;
}

