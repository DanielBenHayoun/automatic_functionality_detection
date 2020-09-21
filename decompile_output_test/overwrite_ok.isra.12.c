
undefined8 overwrite_ok_isra_12(long param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  char extraout_DL;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  undefined uStack60;
  undefined auStack59 [9];
  undefined uStack50;
  ulong uStack48;
  
  uStack48 = *(ulong *)(in_FS_OFFSET + 0x28);
  cVar2 = writable_destination(param_2,(ulong)*param_3);
  if (cVar2 == '\0') {
    strmode((ulong)*param_3,&uStack60);
    uVar1 = *param_3;
    uStack50 = 0;
    uVar4 = quotearg_style(4,param_2);
    uVar6 = program_name;
    if ((*(char *)(param_1 + 0x18) == '\0') && ((*(uint *)(param_1 + 0x14) & 0xffff00) == 0)) {
      uVar5 = func_0x001028e0(0,&UNK_001147d8,5);
    }
    else {
      uVar5 = func_0x001028e0(0,&UNK_001147a8,5);
    }
    uVar10 = 1;
    uVar12 = stderr;
    func_0x00102db0(stderr,1,uVar5,uVar6,uVar4,(ulong)(uVar1 & 0xfff),auStack59);
  }
  else {
    uVar4 = quotearg_style(4,param_2);
    uVar6 = program_name;
    uVar5 = func_0x001028e0(0,&UNK_00114d8c,5);
    uVar10 = 1;
    uVar12 = stderr;
    func_0x00102db0(stderr,1,uVar5,uVar6,uVar4);
  }
  uVar6 = yesno();
  uVar9 = uStack48 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar9 == 0) {
    return uVar6;
  }
  func_0x00102930();
  lVar7 = func_0x001029c0();
  if (-1 < lVar7) {
    if (extraout_DL != '\0') {
      iVar3 = punch_hole(uVar12 & 0xffffffff,lVar7 - uVar9,uVar9);
      if (iVar3 < 0) {
        uVar6 = quotearg_style(4,uVar10);
        puVar11 = &UNK_00114daf;
        goto code_r0x001051c0;
      }
    }
    return 1;
  }
  uVar6 = quotearg_style(4,uVar10);
  puVar11 = &UNK_00114d9f;
code_r0x001051c0:
  uVar4 = func_0x001028e0(0,puVar11,5);
  puVar8 = (uint *)func_0x00102770();
  func_0x00102cb0(0,(ulong)*puVar8,uVar4,uVar6);
  return 0;
}

