
void put_line(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  out_column = 0;
  put_space((ulong)prefix_indent);
  func_0x00101650(prefix,stdout);
  out_column = prefix_length + out_column;
  put_space((ulong)(uint)(param_2 - out_column));
  puVar2 = (undefined8 *)(param_1[4] + -0x28);
  if (param_1 != puVar2) {
    uVar4 = ((ulong)((long)puVar2 - (long)(param_1 + 5)) >> 3) * 0xccccccccccccccd &
            0x1fffffffffffffff;
    puVar2 = param_1 + 1;
    do {
      puVar3 = puVar2 + 5;
      put_word_isra_1(puVar2[-1],puVar2);
      put_space((ulong)*(uint *)((long)puVar2 + 4));
      puVar2 = puVar3;
    } while (puVar3 != param_1 + uVar4 * 5 + 6);
    puVar2 = param_1 + uVar4 * 5 + 5;
  }
  put_word_isra_1(*puVar2,puVar2 + 1);
  last_line_length = out_column;
  puVar1 = *(undefined **)(stdout + 0x28);
  if (puVar1 < *(undefined **)(stdout + 0x30)) {
    *(undefined **)(stdout + 0x28) = puVar1 + 1;
    *puVar1 = 10;
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___overflow_00308ec8)(stdout,10);
  return;
}

