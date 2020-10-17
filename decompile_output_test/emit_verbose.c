
void emit_verbose(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = quotearg_n_style(1,4,param_2);
  uVar3 = quotearg_n_style(0,4,param_1);
  func_0x00102ab0(1,&UNK_00116489,uVar3,uVar2);
  if (param_3 != 0) {
    uVar2 = quotearg_style(4,param_3);
    uVar3 = func_0x00102730(0,&UNK_00116492,5);
    func_0x00102ab0(1,uVar3,uVar2);
  }
  puVar1 = *(undefined **)(stdout + 0x28);
  if (puVar1 < *(undefined **)(stdout + 0x30)) {
    *(undefined **)(stdout + 0x28) = puVar1 + 1;
    *puVar1 = 10;
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___overflow_0031bd70)(stdout,10);
  return;
}

