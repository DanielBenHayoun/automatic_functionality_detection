
int * getuser(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  undefined *puVar7;
  
  if (user_alist == (int *)0x0) {
code_r0x0010f7ed:
    puVar7 = &UNK_001178a1;
    puVar3 = (undefined8 *)func_0x001033c0();
    uVar6 = 0x18;
    if (puVar3 != (undefined8 *)0x0) {
      puVar7 = (undefined *)*puVar3;
      lVar4 = func_0x00103400(puVar7);
      uVar6 = lVar4 + 0x18U & 0xfffffffffffffff8;
    }
    piVar5 = (int *)xmalloc(uVar6);
    *piVar5 = param_1;
    func_0x001032e0(piVar5 + 4,puVar7);
    piVar2 = piVar5;
    *(int **)(piVar5 + 2) = user_alist;
    user_alist = piVar2;
  }
  else {
    iVar1 = *user_alist;
    piVar5 = user_alist;
    while (param_1 != iVar1) {
      piVar5 = *(int **)(piVar5 + 2);
      if (piVar5 == (int *)0x0) goto code_r0x0010f7ed;
      iVar1 = *piVar5;
    }
  }
  if (*(char *)(piVar5 + 4) == '\0') {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = piVar5 + 4;
  }
  return piVar5;
}

