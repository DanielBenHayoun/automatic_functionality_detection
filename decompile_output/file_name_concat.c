
long file_name_concat(long param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *extraout_RDX;
  long lVar4;
  ulong uStack80;
  undefined uStack65;
  
  lVar1 = mfile_name_concat();
  if (lVar1 == 0) {
    xalloc_die();
    lVar1 = last_component();
    lVar2 = base_len(lVar1);
    lVar4 = (lVar1 - param_1) + lVar2;
    lVar1 = func_0x00101640(param_2);
    if (lVar2 == 0) {
      uStack80 = (ulong)(*param_2 == '/');
      uStack65 = 0x2e;
      if (*param_2 != '/') {
        uStack65 = 0;
      }
    }
    else {
      if (*(char *)(param_1 + -1 + lVar4) == '/') {
        uStack80 = 0;
        uStack65 = 0;
      }
      else {
        uStack80 = (ulong)(*param_2 != '/');
        uStack65 = 0x2f;
        if (*param_2 == '/') {
          uStack65 = 0;
        }
      }
    }
    lVar2 = func_0x00101750(lVar4 + 1 + lVar1 + uStack80);
    if (lVar2 != 0) {
      puVar3 = (undefined *)func_0x001017c0(lVar2,param_1,lVar4);
      *puVar3 = uStack65;
      if (extraout_RDX != (long *)0x0) {
        *(undefined **)extraout_RDX = puVar3 + uStack80;
      }
      puVar3 = (undefined *)func_0x001017c0(puVar3 + uStack80,param_2,lVar1);
      *puVar3 = 0;
    }
    return lVar2;
  }
  return lVar1;
}

