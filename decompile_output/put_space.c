
void put_space(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  param_1 = out_column + param_1;
  if (tabs != '\0') {
    iVar3 = param_1 + 7;
    if (-1 < param_1) {
      iVar3 = param_1;
    }
    iVar3 = iVar3 >> 3;
    if ((SBORROW4(out_column + 1,iVar3 * 8) != out_column + 1 + iVar3 * -8 < 0) &&
       (SBORROW4(out_column,iVar3 * 8) != out_column + iVar3 * -8 < 0)) {
      do {
        puVar1 = *(undefined **)(stdout + 0x28);
        if (puVar1 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar1 + 1;
          *puVar1 = 9;
        }
        else {
          func_0x001015d0(stdout,9);
        }
        iVar2 = out_column + 7;
        if (-1 < out_column) {
          iVar2 = out_column;
        }
        iVar2 = (iVar2 >> 3) + 1;
        out_column = iVar2 * 8;
      } while (iVar2 < iVar3);
    }
  }
  while (out_column < param_1) {
    puVar1 = *(undefined **)(stdout + 0x28);
    if (puVar1 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar1 + 1;
      *puVar1 = 0x20;
    }
    else {
      func_0x001015d0(stdout,0x20);
    }
    out_column = out_column + 1;
  }
  return;
}

