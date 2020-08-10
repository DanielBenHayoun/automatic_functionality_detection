
undefined8
excise(long param_1,long param_2,char *param_3,char param_4,undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long extraout_RDX;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined auStack200 [152];
  long lStack48;
  
  uVar7 = *(ulong *)(param_2 + 0x30);
  uVar10 = (ulong)*(uint *)(param_1 + 0x2c);
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = func_0x001019e0(uVar10,uVar7,(ulong)(param_4 != '\0') << 9);
  if (iVar3 == 0) {
    uVar4 = 2;
    if (param_3[0x1a] != '\0') {
      param_2 = quotearg_style(4,*(undefined8 *)(param_2 + 0x38));
      if (param_4 == '\0') {
        uVar7 = func_0x00101a60(0,&UNK_0010b46e,5);
      }
      else {
        uVar7 = func_0x00101a60(0,&UNK_0010b458,5);
      }
      uVar10 = 1;
      func_0x00101ca0(1,uVar7,param_2);
      uVar4 = 2;
    }
  }
  else {
    puVar5 = (uint *)func_0x001019a0();
    uVar1 = *puVar5;
    if (uVar1 == 0x1e) {
      uVar7 = (ulong)*(uint *)(param_1 + 0x2c);
      uVar10 = 1;
      iVar3 = func_0x00101ae0(1,uVar7,*(undefined8 *)(param_2 + 0x30),auStack200,0x100);
      if ((iVar3 == 0) || (uVar1 = *puVar5, uVar1 != 2)) {
        *puVar5 = 0x1e;
      }
      else {
        uVar4 = 2;
        if (*param_3 != '\0') goto code_r0x00102945;
        if (*(short *)(param_2 + 0x70) == 4) goto code_r0x00102ab9;
      }
    }
    else {
      if (*param_3 == '\0') goto code_r0x001029b0;
      if (uVar1 == 0x14) {
code_r0x00102af9:
        uVar4 = 2;
        goto code_r0x00102945;
      }
      if ((int)uVar1 < 0x15) {
        if (uVar1 == 2) goto code_r0x00102af9;
      }
      else {
        if ((uVar1 == 0x16) || (uVar1 == 0x54)) goto code_r0x00102af9;
      }
code_r0x001029b0:
      if ((*(short *)(param_2 + 0x70) == 4) && (uVar1 < 0x28)) {
code_r0x00102ab9:
        if (((0x8000320000U >> ((ulong)uVar1 & 0x1f) & 1) != 0) &&
           ((uVar1 = *(uint *)(param_2 + 0x40), uVar1 == 1 || (uVar1 == 0xd)))) {
          *puVar5 = uVar1;
        }
      }
    }
    uVar4 = quotearg_style(4,*(undefined8 *)(param_2 + 0x38));
    uVar6 = func_0x00101a60(0,&UNK_0010b47a,5);
    uVar7 = (ulong)*puVar5;
    uVar10 = 0;
    func_0x00101cd0(0,uVar7,uVar6,uVar4);
    lVar8 = *(long *)(param_2 + 8);
    lVar2 = *(long *)(lVar8 + 0x58);
    while ((-1 < lVar2 && (*(long *)(lVar8 + 0x20) == 0))) {
      *(undefined8 *)(lVar8 + 0x20) = 1;
      lVar8 = *(long *)(lVar8 + 8);
      lVar2 = *(long *)(lVar8 + 0x58);
    }
    uVar4 = 4;
  }
code_r0x00102945:
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
  func_0x00101ab0();
  lVar8 = *(long *)(extraout_RDX + 0x30);
  if (lVar8 == -1) {
    iVar3 = func_0x00101ae0(1,uVar10 & 0xffffffff,uVar7,extraout_RDX,0x100,param_6,param_2);
    if (iVar3 != 0) {
      *(undefined8 *)(extraout_RDX + 0x30) = 0xfffffffffffffffe;
      piVar9 = (int *)func_0x001019a0();
      iVar3 = *piVar9;
      *(long *)(extraout_RDX + 8) = (long)iVar3;
      goto code_r0x00102b90;
    }
    lVar8 = *(long *)(extraout_RDX + 0x30);
  }
  if (-1 < lVar8) {
    return 0;
  }
  piVar9 = (int *)func_0x001019a0();
  iVar3 = (int)*(undefined8 *)(extraout_RDX + 8);
code_r0x00102b90:
  *piVar9 = iVar3;
  return 0xffffffff;
}

