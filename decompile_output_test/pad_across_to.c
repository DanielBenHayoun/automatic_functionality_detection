
void pad_across_to(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = output_position;
  if (tabify_output != '\0') {
    spaces_not_printed = param_1 - output_position;
    return;
  }
  do {
    iVar2 = iVar2 + 1;
    if (param_1 < iVar2) {
      output_position = param_1;
      return;
    }
    while (puVar1 = *(undefined **)(stdout + 0x28), puVar1 < *(undefined **)(stdout + 0x30)) {
      iVar2 = iVar2 + 1;
      *(undefined **)(stdout + 0x28) = puVar1 + 1;
      *puVar1 = 0x20;
      if (param_1 < iVar2) {
        output_position = param_1;
        return;
      }
    }
    func_0x00101cf0(stdout,0x20);
  } while( true );
}

