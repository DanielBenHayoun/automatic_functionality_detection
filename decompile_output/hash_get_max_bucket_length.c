
void hash_get_max_bucket_length(long **param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = *param_1;
  uVar2 = 0;
  if (param_1[1] <= plVar4) {
    return;
  }
  do {
    if (*plVar4 != 0) {
      lVar1 = plVar4[1];
      uVar3 = 1;
      while (lVar1 != 0) {
        lVar1 = *(long *)(lVar1 + 8);
        uVar3 = uVar3 + 1;
      }
      if (uVar2 < uVar3) {
        uVar2 = uVar3;
      }
    }
    plVar4 = plVar4 + 2;
  } while (plVar4 < param_1[1]);
  return;
}

