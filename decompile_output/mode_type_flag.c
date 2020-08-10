
long mode_type_flag(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                   ulong param_9,long param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 extraout_RDX;
  char cVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 ***pppuVar10;
  undefined *puVar11;
  long in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined8 ***pppuStack232;
  undefined4 uStack224;
  undefined4 uStack220;
  undefined *puStack208;
  long lStack200;
  undefined auStack192 [8];
  long lStack184;
  undefined8 uStack176;
  undefined8 uStack168;
  undefined8 uStack160;
  undefined8 uStack152;
  undefined4 uStack144;
  undefined4 uStack140;
  undefined4 uStack128;
  undefined4 uStack112;
  undefined4 uStack96;
  undefined4 uStack80;
  undefined4 uStack64;
  undefined4 uStack48;
  undefined4 uStack32;
  
  if ((uint)param_9 < 5) {
    switch(param_9 & 0xffffffff) {
    case 0:
      return param_10 + 8;
    case 1:
      return param_10;
    case 2:
      return param_10 + 4;
    case 3:
      return param_10 + 0xc;
    case 4:
      return 0;
    }
  }
  cVar1 = func_0x00102440();
  cVar7 = (char)param_9;
  if (cVar1 != '\0') {
    uStack144 = extraout_XMM0_Da;
    uStack140 = extraout_XMM0_Db;
    uStack128 = param_2;
    uStack112 = param_3;
    uStack96 = param_4;
    uStack80 = param_5;
    uStack64 = param_6;
    uStack48 = param_7;
    uStack32 = param_8;
  }
  lStack200 = *(long *)(in_FS_OFFSET + 0x28);
  pppuVar10 = &pppuStack232;
  puStack208 = auStack192;
  uStack224 = 8;
  uStack220 = 0x30;
  lStack184 = param_10;
  uStack176 = extraout_RDX;
  uStack168 = param_12;
  uStack160 = param_13;
  uStack152 = param_14;
  iVar2 = rpl_vasprintf(pppuVar10,param_9,&uStack224);
  if (iVar2 < 0) {
    xalloc_die();
  }
  else {
    cVar7 = (char)stdout;
    if (0 < current_col) {
      puVar8 = *(undefined **)(stdout + 0x28);
      if (max_col - current_col < iVar2) {
        if (puVar8 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar8 + 1;
          *puVar8 = 10;
        }
        else {
          func_0x00102570(stdout,10);
        }
        cVar7 = (char)stdout;
        current_col = 0;
      }
      else {
        if (puVar8 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar8 + 1;
          *puVar8 = 0x20;
        }
        else {
          func_0x00102570(stdout,0x20);
        }
        current_col = current_col + 1;
        cVar7 = (char)stdout;
      }
    }
    func_0x00102600(pppuStack232);
    func_0x00102430(pppuStack232);
    current_col = current_col + iVar2;
    pppuVar10 = pppuStack232;
    if (lStack200 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  func_0x00102520();
  iVar2 = func_0x001024a0();
  if (iVar2 != 0) {
    iVar2 = func_0x001024a0(pppuVar10);
    iVar3 = func_0x001026c0(pppuVar10);
    if (iVar2 != iVar3) {
      uVar4 = func_0x001026c0(pppuVar10);
      if ((int)uVar4 != 0) {
        puVar8 = &UNK_0010b651;
        iVar2 = 0;
        piVar6 = (int *)(speeds + 0x20);
        while (iVar2 = iVar2 + 1, puVar8 != (undefined *)0x0) {
          iVar3 = (int)uVar4;
          uVar4 = uVar4 & 0xffffffff;
          if (iVar3 == *piVar6) {
            uVar5 = *(undefined8 *)(speeds + (long)iVar2 * 0x18 + 0x10);
            goto code_r0x0010379c;
          }
          puVar8 = *(undefined **)(piVar6 + 4);
          piVar6 = piVar6 + 6;
        }
      }
      uVar5 = 0;
code_r0x0010379c:
      uVar4 = func_0x001024a0(pppuVar10);
      if ((int)uVar4 != 0) {
        puVar8 = &UNK_0010b651;
        iVar2 = 0;
        piVar6 = (int *)(speeds + 0x20);
        while (iVar2 = iVar2 + 1, puVar8 != (undefined *)0x0) {
          iVar3 = (int)uVar4;
          uVar4 = uVar4 & 0xffffffff;
          if (iVar3 == *piVar6) {
            uVar9 = *(undefined8 *)(speeds + (long)iVar2 * 0x18 + 0x10);
            goto code_r0x001037d7;
          }
          puVar8 = *(undefined **)(piVar6 + 4);
          piVar6 = piVar6 + 6;
        }
      }
      uVar9 = 0;
code_r0x001037d7:
      puVar8 = &UNK_0010b2f4;
      if (cVar7 != '\0') {
        puVar8 = &UNK_0010b930;
      }
      uVar5 = wrapf(puVar8,uVar9,uVar5);
      goto code_r0x00103744;
    }
  }
  uVar4 = func_0x001026c0(pppuVar10);
  if ((int)uVar4 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = &UNK_0010b651;
    iVar2 = 0;
    piVar6 = (int *)(speeds + 0x20);
    while (iVar2 = iVar2 + 1, puVar8 != (undefined *)0x0) {
      iVar3 = (int)uVar4;
      uVar4 = uVar4 & 0xffffffff;
      if (iVar3 == *piVar6) {
        puVar8 = *(undefined **)(speeds + (long)iVar2 * 0x18 + 0x10);
        break;
      }
      puVar8 = *(undefined **)(piVar6 + 4);
      piVar6 = piVar6 + 6;
    }
  }
  puVar11 = &UNK_0010b2f8;
  if (cVar7 != '\0') {
    puVar11 = &UNK_0010b2e4;
  }
  uVar5 = wrapf(puVar11,puVar8);
code_r0x00103744:
  if (cVar7 == '\0') {
    current_col = 0;
  }
  return uVar5;
}

