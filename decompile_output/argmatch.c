
long argmatch(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack88;
  
  lVar4 = func_0x00101820();
  lVar5 = *param_2;
  lStack88 = -1;
  lVar2 = lStack88;
  if (lVar5 != 0) {
    bVar1 = false;
    lVar2 = 0;
    lVar7 = param_3;
code_r0x00102e87:
    do {
      lVar6 = lVar2;
      iVar3 = func_0x001017a0(lVar5,param_1,lVar4);
      if (iVar3 == 0) {
        lVar5 = func_0x00101820(lVar5);
        if (lVar5 == lVar4) {
          return lVar6;
        }
        if (lStack88 == -1) {
          lVar7 = lVar7 + param_4;
          lVar5 = param_2[lVar6 + 1];
          lVar2 = lVar6 + 1;
          lStack88 = lVar6;
          if (lVar5 == 0) break;
          goto code_r0x00102e87;
        }
        if (param_3 == 0) {
          bVar1 = true;
        }
        else {
          iVar3 = func_0x00101900(lStack88 * param_4 + param_3,lVar7,param_4);
          if (iVar3 != 0) {
            bVar1 = true;
          }
        }
      }
      lVar7 = lVar7 + param_4;
      lVar5 = param_2[lVar6 + 1];
      lVar2 = lVar6 + 1;
    } while (lVar5 != 0);
    lVar2 = -2;
    if (!bVar1) {
      lVar2 = lStack88;
    }
  }
  lStack88 = lVar2;
  return lStack88;
}

