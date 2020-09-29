
ulong set_owner(long param_1,undefined8 param_2,uint param_3,long param_4,char param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar10 = (ulong)param_3;
  uVar1 = *(uint *)(param_4 + 0x1c);
  uVar2 = *(uint *)(param_4 + 0x20);
  if (param_5 == '\0') {
    if ((*(ulong *)(param_1 + 0x18) & 0xff0000000000ff) == 0) {
      if (*(char *)(param_1 + 0x2b) == '\0') goto code_r0x00105755;
      uVar11 = *(uint *)(param_6 + 0x18);
      uVar9 = *(uint *)(param_1 + 0x10);
    }
    else {
      uVar11 = *(uint *)(param_6 + 0x18);
      uVar9 = *(uint *)(param_4 + 0x18);
    }
    if (((((uint)CONCAT11((char)((ulong)~uVar9 >> 8),(char)~uVar9) | 0xe00) & uVar11 & 0xfff) != 0)
       && (iVar4 = qset_acl(param_2,uVar10,(ulong)(uVar9 & uVar11 & 0x1c0)), iVar4 != 0)) {
      puVar6 = (uint *)func_0x001025a0();
      if (((*puVar6 != 1) && (*puVar6 != 0x16)) || (*(char *)(param_1 + 0x1b) != '\0')) {
        uVar7 = quotearg_style(4,param_2);
        uVar8 = func_0x00102730(0,&UNK_0011650f,5);
        func_0x00102b10(0,(ulong)*puVar6,uVar8,uVar7);
      }
      goto code_r0x001058cc;
    }
  }
code_r0x00105755:
  if (param_3 == 0xffffffff) {
    iVar4 = func_0x00102a40(param_2,(ulong)uVar1,(ulong)uVar2);
    if (iVar4 == 0) {
      return 1;
    }
    piVar5 = (int *)func_0x001025a0();
    iVar4 = *piVar5;
    if ((iVar4 == 1) || (iVar4 == 0x16)) {
      func_0x00102a40(param_2,0xffffffff,(ulong)uVar2);
      *piVar5 = iVar4;
    }
  }
  else {
    iVar4 = func_0x00102b50(uVar10);
    if (iVar4 == 0) {
      return 1;
    }
    piVar5 = (int *)func_0x001025a0();
    iVar4 = *piVar5;
    if ((iVar4 == 1) || (iVar4 == 0x16)) {
      func_0x00102b50(uVar10,0xffffffff,(ulong)uVar2);
      *piVar5 = iVar4;
    }
  }
  cVar3 = chown_failure_ok(param_1);
  if (cVar3 != '\0') {
    return 0;
  }
  uVar7 = quotearg_style(4,param_2);
  uVar8 = func_0x00102730(0,&UNK_00115f60,5);
  puVar6 = (uint *)func_0x001025a0();
  func_0x00102b10(0,(ulong)*puVar6,uVar8,uVar7);
code_r0x001058cc:
  return (ulong)-(uint)*(byte *)(param_1 + 0x24);
}

