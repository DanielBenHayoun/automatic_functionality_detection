
undefined * indent(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  undefined in_AL;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  if (param_2 <= param_1) {
    return (undefined *)_in_AL;
  }
  do {
    while( true ) {
      uVar4 = tabsize;
      uVar2 = param_1 + 1;
      puVar1 = *(undefined **)(stdout + 0x28);
      if ((tabsize == 0) || (param_2 / tabsize <= uVar2 / tabsize)) break;
      if (puVar1 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar1 + 1;
        *puVar1 = 9;
      }
      else {
        func_0x00103490(stdout,9);
        uVar4 = tabsize;
      }
      uVar2 = param_1 / uVar4;
      param_1 = (uVar4 + param_1) - param_1 % uVar4;
      if (param_2 <= param_1) {
        return (undefined *)uVar2;
      }
    }
    if (puVar1 < *(undefined **)(stdout + 0x30)) {
      puVar3 = puVar1 + 1;
      *(undefined **)(stdout + 0x28) = puVar3;
      *puVar1 = 0x20;
    }
    else {
      puVar3 = (undefined *)func_0x00103490(stdout,0x20);
    }
    param_1 = uVar2;
  } while (uVar2 < param_2);
  return puVar3;
}

