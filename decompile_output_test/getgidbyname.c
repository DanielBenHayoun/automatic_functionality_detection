
undefined4 * getgidbyname(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  
  if (group_alist != (undefined4 *)0x0) {
    cVar1 = *param_1;
    puVar6 = group_alist;
    do {
      if ((*(char *)(puVar6 + 4) == cVar1) &&
         (iVar3 = func_0x00103590(puVar6 + 4,param_1), iVar3 == 0)) {
        return puVar6;
      }
      puVar6 = *(undefined4 **)(puVar6 + 2);
    } while (puVar6 != (undefined4 *)0x0);
  }
  if (nogroup_alist != (undefined4 *)0x0) {
    cVar1 = *param_1;
    puVar6 = nogroup_alist;
    do {
      if ((*(char *)(puVar6 + 4) == cVar1) &&
         (iVar3 = func_0x00103590(puVar6 + 4,param_1), iVar3 == 0)) {
        return (undefined4 *)0;
      }
      puVar6 = *(undefined4 **)(puVar6 + 2);
    } while (puVar6 != (undefined4 *)0x0);
  }
  lVar4 = func_0x00103600(param_1);
  lVar5 = func_0x00103400(param_1);
  puVar6 = (undefined4 *)xmalloc(lVar5 + 0x18U & 0xfffffffffffffff8);
  func_0x001032e0(puVar6 + 4,param_1);
  if (lVar4 == 0) {
    *(undefined4 **)(puVar6 + 2) = nogroup_alist;
    nogroup_alist = puVar6;
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = *(undefined4 *)(lVar4 + 0x10);
    puVar2 = puVar6;
    *(undefined4 **)(puVar6 + 2) = group_alist;
    group_alist = puVar2;
  }
  return puVar6;
}

