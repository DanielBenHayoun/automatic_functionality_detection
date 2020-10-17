
undefined8 mkancesdirs_safe_wd(char *param_1,char *param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  long in_FS_OFFSET;
  undefined4 auStack56 [2];
  ulong uStack48;
  
  uStack48 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (((param_4 == '\0') && (*param_1 == '/')) && (*param_2 == '/')) {
    auStack56[0] = 0;
    savewd_finish(auStack56);
    lVar3 = mkancesdirs(param_2,auStack56,make_ancestor,param_3);
    if (lVar3 == -1) goto code_r0x001040cf;
    uVar4 = 1;
  }
  else {
    auStack56[0] = 0;
    lVar3 = mkancesdirs(param_2,auStack56,make_ancestor,param_3);
    if (lVar3 == -1) {
      uVar4 = quotearg_style(4,param_2);
      uVar5 = func_0x00102ad0(0,&UNK_001163c4,5);
      puVar6 = (uint *)func_0x00102950();
      func_0x00102f30(0,(ulong)*puVar6,uVar5,uVar4);
      savewd_restore(auStack56,1);
      savewd_finish(auStack56);
      uVar4 = 0;
    }
    else {
      iVar2 = savewd_restore(auStack56,0);
      puVar6 = (uint *)func_0x00102950();
      uVar1 = *puVar6;
      savewd_finish(auStack56);
      uVar4 = 0;
      if ((iVar2 < 1) && (uVar4 = 1, iVar2 < 0)) {
        uVar4 = quotearg_style(4,param_2);
        uVar5 = func_0x00102ad0(0,&UNK_001163c4,5);
        func_0x00102f30(0,(ulong)uVar1,uVar5,uVar4);
        uVar4 = 0;
      }
    }
  }
  while (param_2 = (char *)(uStack48 ^ *(ulong *)(in_FS_OFFSET + 0x28)), param_2 != (char *)0x0) {
    func_0x00102b30();
code_r0x001040cf:
    uVar4 = quotearg_style(4,param_2);
    uVar5 = func_0x00102ad0(0,&UNK_001163c4,5);
    puVar6 = (uint *)func_0x00102950();
    func_0x00102f30(0,(ulong)*puVar6,uVar5,uVar4);
    uVar4 = 0;
  }
  return uVar4;
}

