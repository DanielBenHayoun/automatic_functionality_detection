
void display_speed(undefined8 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  iVar1 = func_0x001024a0();
  if (iVar1 != 0) {
    iVar1 = func_0x001024a0(param_1);
    iVar2 = func_0x001026c0(param_1);
    if (iVar1 != iVar2) {
      uVar3 = func_0x001026c0(param_1);
      if ((int)uVar3 != 0) {
        puVar5 = &UNK_0010b651;
        iVar1 = 0;
        piVar4 = (int *)(speeds + 0x20);
        while (iVar1 = iVar1 + 1, puVar5 != (undefined *)0x0) {
          iVar2 = (int)uVar3;
          uVar3 = uVar3 & 0xffffffff;
          if (iVar2 == *piVar4) {
            uVar8 = *(undefined8 *)(speeds + (long)iVar1 * 0x18 + 0x10);
            goto code_r0x0010379c;
          }
          puVar5 = *(undefined **)(piVar4 + 4);
          piVar4 = piVar4 + 6;
        }
      }
      uVar8 = 0;
code_r0x0010379c:
      uVar3 = func_0x001024a0(param_1);
      if ((int)uVar3 != 0) {
        puVar5 = &UNK_0010b651;
        iVar1 = 0;
        piVar4 = (int *)(speeds + 0x20);
        while (iVar1 = iVar1 + 1, puVar5 != (undefined *)0x0) {
          iVar2 = (int)uVar3;
          uVar3 = uVar3 & 0xffffffff;
          if (iVar2 == *piVar4) {
            uVar6 = *(undefined8 *)(speeds + (long)iVar1 * 0x18 + 0x10);
            goto code_r0x001037d7;
          }
          puVar5 = *(undefined **)(piVar4 + 4);
          piVar4 = piVar4 + 6;
        }
      }
      uVar6 = 0;
code_r0x001037d7:
      puVar5 = &UNK_0010b2f4;
      if (param_2 != '\0') {
        puVar5 = &UNK_0010b930;
      }
      wrapf(puVar5,uVar6,uVar8);
      goto code_r0x00103744;
    }
  }
  uVar3 = func_0x001026c0(param_1);
  if ((int)uVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &UNK_0010b651;
    iVar1 = 0;
    piVar4 = (int *)(speeds + 0x20);
    while (iVar1 = iVar1 + 1, puVar5 != (undefined *)0x0) {
      iVar2 = (int)uVar3;
      uVar3 = uVar3 & 0xffffffff;
      if (iVar2 == *piVar4) {
        puVar5 = *(undefined **)(speeds + (long)iVar1 * 0x18 + 0x10);
        break;
      }
      puVar5 = *(undefined **)(piVar4 + 4);
      piVar4 = piVar4 + 6;
    }
  }
  puVar7 = &UNK_0010b2f8;
  if (param_2 != '\0') {
    puVar7 = &UNK_0010b2e4;
  }
  wrapf(puVar7,puVar5);
code_r0x00103744:
  if (param_2 == '\0') {
    current_col = 0;
  }
  return;
}

