
void wrapf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  int iVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  char cVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 ***pppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  undefined8 ***pppuStack224;
  undefined4 uStack216;
  undefined4 uStack212;
  undefined *puStack208;
  undefined *puStack200;
  long lStack192;
  undefined auStack184 [8];
  undefined8 uStack176;
  undefined8 uStack168;
  undefined8 uStack160;
  undefined8 uStack152;
  undefined8 uStack144;
  undefined4 uStack136;
  undefined4 uStack120;
  undefined4 uStack104;
  undefined4 uStack88;
  undefined4 uStack72;
  undefined4 uStack56;
  undefined4 uStack40;
  undefined4 uStack24;
  
  cVar5 = (char)param_9;
  if (in_AL != '\0') {
    uStack136 = param_1;
    uStack120 = param_2;
    uStack104 = param_3;
    uStack88 = param_4;
    uStack72 = param_5;
    uStack56 = param_6;
    uStack40 = param_7;
    uStack24 = param_8;
  }
  lStack192 = *(long *)(in_FS_OFFSET + 0x28);
  puStack208 = &stack0x00000008;
  pppuVar8 = &pppuStack224;
  puStack200 = auStack184;
  uStack216 = 8;
  uStack212 = 0x30;
  uStack176 = param_10;
  uStack168 = param_11;
  uStack160 = param_12;
  uStack152 = param_13;
  uStack144 = param_14;
  iVar1 = rpl_vasprintf(pppuVar8,param_9,&uStack216);
  if (iVar1 < 0) {
    xalloc_die();
  }
  else {
    cVar5 = (char)stdout;
    if (0 < current_col) {
      puVar6 = *(undefined **)(stdout + 0x28);
      if (max_col - current_col < iVar1) {
        if (puVar6 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar6 + 1;
          *puVar6 = 10;
        }
        else {
          func_0x00102570(stdout,10);
        }
        cVar5 = (char)stdout;
        current_col = 0;
      }
      else {
        if (puVar6 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar6 + 1;
          *puVar6 = 0x20;
        }
        else {
          func_0x00102570(stdout,0x20);
        }
        current_col = current_col + 1;
        cVar5 = (char)stdout;
      }
    }
    func_0x00102600(pppuStack224);
    func_0x00102430(pppuStack224);
    current_col = current_col + iVar1;
    pppuVar8 = pppuStack224;
    if (lStack192 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  func_0x00102520();
  iVar1 = func_0x001024a0();
  if (iVar1 != 0) {
    iVar1 = func_0x001024a0(pppuVar8);
    iVar2 = func_0x001026c0(pppuVar8);
    if (iVar1 != iVar2) {
      uVar3 = func_0x001026c0(pppuVar8);
      if ((int)uVar3 != 0) {
        puVar6 = &UNK_0010b651;
        iVar1 = 0;
        piVar4 = (int *)(speeds + 0x20);
        while (iVar1 = iVar1 + 1, puVar6 != (undefined *)0x0) {
          iVar2 = (int)uVar3;
          uVar3 = uVar3 & 0xffffffff;
          if (iVar2 == *piVar4) {
            uVar10 = *(undefined8 *)(speeds + (long)iVar1 * 0x18 + 0x10);
            goto code_r0x0010379c;
          }
          puVar6 = *(undefined **)(piVar4 + 4);
          piVar4 = piVar4 + 6;
        }
      }
      uVar10 = 0;
code_r0x0010379c:
      uVar3 = func_0x001024a0(pppuVar8);
      if ((int)uVar3 != 0) {
        puVar6 = &UNK_0010b651;
        iVar1 = 0;
        piVar4 = (int *)(speeds + 0x20);
        while (iVar1 = iVar1 + 1, puVar6 != (undefined *)0x0) {
          iVar2 = (int)uVar3;
          uVar3 = uVar3 & 0xffffffff;
          if (iVar2 == *piVar4) {
            uVar7 = *(undefined8 *)(speeds + (long)iVar1 * 0x18 + 0x10);
            goto code_r0x001037d7;
          }
          puVar6 = *(undefined **)(piVar4 + 4);
          piVar4 = piVar4 + 6;
        }
      }
      uVar7 = 0;
code_r0x001037d7:
      puVar6 = &UNK_0010b2f4;
      if (cVar5 != '\0') {
        puVar6 = &UNK_0010b930;
      }
      wrapf(puVar6,uVar7,uVar10);
      goto code_r0x00103744;
    }
  }
  uVar3 = func_0x001026c0(pppuVar8);
  if ((int)uVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &UNK_0010b651;
    iVar1 = 0;
    piVar4 = (int *)(speeds + 0x20);
    while (iVar1 = iVar1 + 1, puVar6 != (undefined *)0x0) {
      iVar2 = (int)uVar3;
      uVar3 = uVar3 & 0xffffffff;
      if (iVar2 == *piVar4) {
        puVar6 = *(undefined **)(speeds + (long)iVar1 * 0x18 + 0x10);
        break;
      }
      puVar6 = *(undefined **)(piVar4 + 4);
      piVar4 = piVar4 + 6;
    }
  }
  puVar9 = &UNK_0010b2f8;
  if (cVar5 != '\0') {
    puVar9 = &UNK_0010b2e4;
  }
  wrapf(puVar9,puVar6);
code_r0x00103744:
  if (cVar5 == '\0') {
    current_col = 0;
  }
  return;
}

