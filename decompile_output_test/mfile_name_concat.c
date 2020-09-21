
long mfile_name_concat(long param_1,char *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uStack72;
  undefined uStack57;
  
  lVar1 = last_component();
  lVar2 = base_len(lVar1);
  lVar4 = (lVar1 - param_1) + lVar2;
  lVar1 = func_0x00101980(param_2);
  if (lVar2 == 0) {
    uStack72 = (ulong)(*param_2 == '/');
    uStack57 = 0x2e;
    if (*param_2 != '/') {
      uStack57 = 0;
    }
  }
  else {
    if (*(char *)(param_1 + -1 + lVar4) == '/') {
      uStack72 = 0;
      uStack57 = 0;
    }
    else {
      uStack72 = (ulong)(*param_2 != '/');
      uStack57 = 0x2f;
      if (*param_2 == '/') {
        uStack57 = 0;
      }
    }
  }
  lVar2 = func_0x00101ac0(lVar4 + 1 + lVar1 + uStack72);
  if (lVar2 != 0) {
    puVar3 = (undefined *)func_0x00101b80(lVar2,param_1,lVar4);
    *puVar3 = uStack57;
    if (param_3 != (long *)0x0) {
      *(undefined **)param_3 = puVar3 + uStack72;
    }
    puVar3 = (undefined *)func_0x00101b80(puVar3 + uStack72,param_2,lVar1);
    *puVar3 = 0;
  }
  return lVar2;
}

