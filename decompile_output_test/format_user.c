
void format_user(ulong param_1,uint param_2,char param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = &UNK_00117885;
  if ((param_3 != '\0') && (puVar3 = (undefined *)0x0, numeric_ids == '\0')) {
    puVar3 = (undefined *)getuser();
  }
  if (puVar3 == (undefined *)0x0) {
    lVar2 = (long)(int)param_2;
    func_0x00103710(1,&UNK_0011787f,(ulong)param_2,param_1 & 0xffffffff);
  }
  else {
    iVar1 = gnu_mbswidth(puVar3,0);
    iVar1 = param_2 - iVar1;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    func_0x00103570(puVar3,stdout);
    lVar2 = func_0x00103400(puVar3);
    lVar2 = iVar1 + lVar2;
    do {
      puVar3 = *(undefined **)(stdout + 0x28);
      if (puVar3 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar3 + 1;
        *puVar3 = 0x20;
      }
      else {
        func_0x00103490(stdout,0x20);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  dired_pos = lVar2 + 1 + dired_pos;
  return;
}

