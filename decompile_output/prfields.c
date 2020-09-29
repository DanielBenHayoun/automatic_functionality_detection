
void prfields(long param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (autoformat == '\0') {
    param_3 = *(ulong *)(param_1 + 0x18);
  }
  uVar5 = (ulong)tab;
  if ((int)tab < 0) {
    uVar5 = 0x20;
  }
  uVar3 = param_2;
  if (param_3 <= param_2) {
    uVar3 = param_3;
  }
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      puVar1 = *(undefined **)(stdout + 0x28);
      if (puVar1 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar1 + 1;
        *puVar1 = (char)uVar5;
      }
      else {
        func_0x00101760(stdout,uVar5 & 0xff);
      }
      uVar2 = uVar4 + 1;
      prfield_isra_5(uVar4,*(undefined8 *)(param_1 + 0x18),param_1 + 0x28);
      uVar4 = uVar2;
    } while (uVar2 != uVar3);
  }
  if (param_2 + 1 < param_3) {
    uVar3 = param_2 + 1;
    do {
      puVar1 = *(undefined **)(stdout + 0x28);
      if (puVar1 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar1 + 1;
        *puVar1 = (char)uVar5;
      }
      else {
        func_0x00101760(stdout,uVar5 & 0xff);
      }
      uVar4 = uVar3 + 1;
      prfield_isra_5(uVar3,*(undefined8 *)(param_1 + 0x18),param_1 + 0x28);
      uVar3 = uVar4;
    } while (param_3 != uVar4);
  }
  return;
}

