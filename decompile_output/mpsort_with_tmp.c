
/* WARNING: Possible PIC construction at 0x00110478: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0011047d) */

void mpsort_with_tmp(undefined8 *param_1,ulong param_2,undefined8 *param_3,code *param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uStack96;
  ulong uStack72;
  
  if (param_2 < 3) {
    if (param_2 == 2) {
      uVar10 = param_1[1];
      uVar4 = *param_1;
      iVar2 = (*param_4)(uVar4,uVar10);
      if (0 < iVar2) {
        *param_1 = uVar10;
        param_1[1] = uVar4;
      }
    }
  }
  else {
    uVar3 = param_2 >> 1;
    mpsort_with_tmp(param_1 + uVar3,param_2 - uVar3,param_3,param_4);
    if (uVar3 != 1) {
      param_2 = param_2 >> 2;
      mpsort_with_tmp(param_1 + param_2,uVar3 - param_2,param_3,param_4);
      mpsort_with_tmp(param_1,param_2,param_3,param_4);
      uVar10 = *param_1;
      uVar4 = param_1[param_2];
      uStack96 = 0;
      uVar5 = param_2;
      puVar6 = param_3;
      while( true ) {
        iVar2 = (*param_4)(uVar10,uVar4);
        puVar9 = puVar6;
        while (puVar6 = puVar9 + 1, 0 < iVar2) {
          uVar5 = uVar5 + 1;
          *puVar9 = uVar4;
          uStack72 = param_2;
          if (uVar3 == uVar5) goto code_r0x0011045f;
          uVar4 = param_1[uVar5];
          iVar2 = (*param_4)(uVar10,uVar4);
          puVar9 = puVar6;
        }
        uVar1 = uStack96 + 1;
        *puVar9 = uVar10;
        uStack96 = uVar5;
        uStack72 = uVar3;
        if (param_2 == uVar1) break;
        uVar10 = param_1[uVar1];
        uStack96 = uVar1;
      }
code_r0x0011045f:
      lVar8 = uStack72 - uStack96;
      param_3 = param_1 + uStack96;
code_r0x001035f0:
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_memcpy_0031fe78)(puVar6,param_3,lVar8 * 8);
      return;
    }
    uVar10 = *param_1;
    *param_3 = uVar10;
    lVar8 = 0;
    uStack96 = 0;
    uVar4 = param_1[uVar3];
    while( true ) {
      iVar2 = (*param_4)(uVar10,uVar4);
      lVar7 = lVar8;
      while (lVar8 = lVar7 + 1, 0 < iVar2) {
        uVar3 = uVar3 + 1;
        param_1[lVar7] = uVar4;
        if (param_2 == uVar3) {
          puVar6 = param_1 + lVar8;
          lVar8 = 1 - uStack96;
          param_3 = param_3 + uStack96;
          goto code_r0x001035f0;
        }
        uVar4 = param_1[uVar3];
        iVar2 = (*param_4)(uVar10,uVar4);
        lVar7 = lVar8;
      }
      uStack96 = uStack96 + 1;
      param_1[lVar7] = uVar10;
      if (uStack96 == 1) break;
      uVar10 = param_3[uStack96];
    }
  }
  return;
}

