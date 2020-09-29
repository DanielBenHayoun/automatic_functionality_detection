
void print_element(undefined8 param_1)

{
  undefined *puVar1;
  
  if (printed_7559 != '\0') {
    puVar1 = *(undefined **)(stdout + 0x28);
    if (puVar1 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar1 + 1;
      *puVar1 = 0x20;
    }
    else {
      func_0x00101440(stdout,0x20);
    }
  }
  printed_7559 = 1;
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fputs_unlocked_00306f28)(param_1,stdout);
  return;
}

