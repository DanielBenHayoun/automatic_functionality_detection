
long freopen_safer(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  
  iVar3 = func_0x00101960(param_3);
  puVar4 = (undefined4 *)func_0x00101790();
  if (iVar3 == 1) {
    bVar7 = false;
    bVar8 = false;
code_r0x00103340:
    iVar3 = func_0x00101860(0,0);
    if (iVar3 != 0) {
      cVar2 = protect_fd(0);
      if (cVar2 != '\0') {
        cVar1 = cVar2;
        if (bVar8 != false) goto code_r0x001033e0;
        goto code_r0x00103368;
      }
      cVar2 = '\x01';
      lVar5 = 0;
      goto code_r0x00103393;
    }
    cVar2 = '\0';
    cVar1 = '\0';
    if (bVar8 == false) {
code_r0x00103368:
      if ((bVar7 == false) || (bVar7 = (bool)protect_fd(2), bVar7 != false)) goto code_r0x00103380;
      uVar6 = *puVar4;
      lVar5 = 0;
      goto code_r0x00103440;
    }
code_r0x001033e0:
    cVar2 = cVar1;
    bVar8 = (bool)protect_fd(1);
    if (bVar8 != false) goto code_r0x00103368;
    lVar5 = 0;
    uVar6 = *puVar4;
    if (bVar7 != false) {
      func_0x001018e0(2);
    }
  }
  else {
    if (iVar3 == 2) {
      bVar7 = false;
code_r0x0010332a:
      iVar3 = func_0x00101860(1,1);
      bVar8 = iVar3 != 1;
      goto code_r0x00103340;
    }
    if (iVar3 != 0) {
      iVar3 = func_0x00101860(2,2);
      bVar7 = iVar3 != 2;
      goto code_r0x0010332a;
    }
    bVar7 = false;
    bVar8 = false;
    cVar2 = '\0';
code_r0x00103380:
    lVar5 = func_0x001018d0(param_1,param_2,param_3);
code_r0x00103393:
    uVar6 = *puVar4;
    if (bVar7 != false) {
code_r0x00103440:
      func_0x001018e0(2);
    }
    if (bVar8 == false) goto joined_r0x0010341d;
  }
  func_0x001018e0(1);
joined_r0x0010341d:
  if (cVar2 != '\0') {
    func_0x001018e0(0);
  }
  if (lVar5 == 0) {
    *puVar4 = uVar6;
  }
  return lVar5;
}

