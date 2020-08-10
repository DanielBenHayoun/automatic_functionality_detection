
void argmatch_valid(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = stderr;
  uVar3 = func_0x001033e0(0,&UNK_00119f55,5);
  func_0x00103570(uVar3,lVar7);
  lVar7 = *param_1;
  if (lVar7 != 0) {
    lVar4 = 0;
    lVar6 = 0;
code_r0x0010c378:
    do {
      lVar5 = param_2;
      if (lVar4 != 0) {
        iVar2 = func_0x00103550(lVar6,lVar5,param_3);
        if (iVar2 == 0) {
          lVar4 = lVar4 + 1;
          uVar3 = quote(lVar7);
          func_0x00103800(stderr,1,&UNK_00119f72,uVar3);
          lVar7 = param_1[lVar4];
          param_2 = lVar5 + param_3;
          if (lVar7 == 0) break;
          goto code_r0x0010c378;
        }
      }
      lVar4 = lVar4 + 1;
      uVar3 = quote(lVar7);
      func_0x00103800(stderr,1,&UNK_00119f6a,uVar3);
      lVar7 = param_1[lVar4];
      param_2 = lVar5 + param_3;
      lVar6 = lVar5;
    } while (lVar7 != 0);
  }
  puVar1 = *(undefined **)(stderr + 0x28);
  if (puVar1 < *(undefined **)(stderr + 0x30)) {
    *(undefined **)(stderr + 0x28) = puVar1 + 1;
    *puVar1 = 10;
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___overflow_0031fdc8)(stderr,10);
  return;
}

