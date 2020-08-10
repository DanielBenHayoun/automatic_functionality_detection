
void print_char(byte param_1)

{
  byte bVar1;
  byte *pbVar2;
  long *plVar3;
  
  if (tabify_output != '\0') {
    if (param_1 == 0x20) {
      spaces_not_printed = spaces_not_printed + 1;
      return;
    }
    if (spaces_not_printed < 1) {
      plVar3 = (long *)func_0x00101f90();
      bVar1 = *(byte *)(*plVar3 + 1 + (ulong)param_1 * 2);
    }
    else {
      print_white_space();
      plVar3 = (long *)func_0x00101f90();
      bVar1 = *(byte *)(*plVar3 + 1 + (ulong)param_1 * 2);
    }
    if ((bVar1 & 0x40) == 0) {
      if (param_1 == 8) {
        output_position = output_position + -1;
      }
    }
    else {
      output_position = output_position + 1;
    }
  }
  pbVar2 = *(byte **)(stdout + 0x28);
  if (pbVar2 < *(byte **)(stdout + 0x30)) {
    *(byte **)(stdout + 0x28) = pbVar2 + 1;
    *pbVar2 = param_1;
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___overflow_00310e68)(stdout,(ulong)param_1);
  return;
}

