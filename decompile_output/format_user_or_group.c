
void format_user_or_group(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 == 0) {
    lVar3 = (long)(int)param_3;
    func_0x00103710(1,&UNK_0011787f,param_3,param_2);
  }
  else {
    iVar2 = gnu_mbswidth(param_1,0);
    iVar2 = (int)param_3 - iVar2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    func_0x00103570(param_1,stdout);
    lVar3 = func_0x00103400(param_1);
    lVar3 = iVar2 + lVar3;
    do {
      puVar1 = *(undefined **)(stdout + 0x28);
      if (puVar1 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar1 + 1;
        *puVar1 = 0x20;
      }
      else {
        func_0x00103490(stdout,0x20);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  dired_pos = lVar3 + 1 + dired_pos;
  return;
}

