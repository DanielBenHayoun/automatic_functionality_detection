
ulong lower_subexps(long *param_1,long *param_2)

{
  long lVar1;
  long **pplVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long in_FS_OFFSET;
  uint uStack36;
  long lStack32;
  
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  uStack36 = 0;
  plVar5 = param_2;
  plVar6 = param_1;
  if ((param_2[1] != 0) && (*(char *)(param_2[1] + 0x30) == '\x11')) {
    plVar6 = (long *)&uStack36;
    plVar5 = param_1;
    pplVar2 = (long **)lower_subexp();
    *(long ***)(param_2 + 1) = pplVar2;
    if (pplVar2 != (long **)0x0) {
      *pplVar2 = param_2;
    }
  }
  if ((param_2[2] != 0) && (*(char *)(param_2[2] + 0x30) == '\x11')) {
    plVar6 = (long *)&uStack36;
    pplVar2 = (long **)lower_subexp();
    *(long ***)(param_2 + 2) = pplVar2;
    plVar5 = param_1;
    if (pplVar2 != (long **)0x0) {
      *pplVar2 = param_2;
    }
  }
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uStack36;
  }
  func_0x00101c20();
  lVar3 = plVar5[1];
  plVar6[1] = lVar3;
  lVar1 = plVar5[1];
  if (0 < lVar1) {
    *plVar6 = lVar3;
    lVar3 = func_0x00101da0(lVar3 * 8);
    plVar6[2] = lVar3;
    if (lVar3 == 0) {
      plVar6[1] = 0;
      *plVar6 = 0;
      uVar4 = 0xc;
    }
    else {
      func_0x00101d70(lVar3,plVar5[2],lVar1 * 8);
      uVar4 = 0;
    }
    return uVar4;
  }
  plVar6[2] = 0;
  *(undefined4 *)plVar6 = 0;
  *(undefined4 *)((long)plVar6 + 4) = 0;
  *(undefined4 *)(plVar6 + 1) = 0;
  *(undefined4 *)((long)plVar6 + 0xc) = 0;
  return 0;
}

