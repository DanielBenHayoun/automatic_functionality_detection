
void put_word_isra_1(undefined *param_1,int *param_2)

{
  undefined uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  iVar2 = *param_2;
  if (iVar2 != 0) {
    puVar3 = param_1;
    do {
      puVar4 = puVar3 + 1;
      uVar1 = *puVar3;
      puVar3 = *(undefined **)(stdout + 0x28);
      if (puVar3 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar3 + 1;
        *puVar3 = uVar1;
      }
      else {
        func_0x001015d0();
      }
      puVar3 = puVar4;
    } while (puVar4 != param_1 + (ulong)(iVar2 - 1) + 1);
    out_column = out_column + *param_2;
    return;
  }
  return;
}

