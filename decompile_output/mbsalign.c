
undefined *
mbsalign(long param_1,undefined *param_2,long param_3,undefined8 *param_4,int param_5,uint param_6)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  int *piVar10;
  undefined *puVar11;
  undefined *puVar12;
  int *piStack104;
  long lStack96;
  undefined *puStack72;
  
  puVar8 = (undefined *)func_0x00103400();
  puVar11 = puVar8;
  if (((param_6 & 2) == 0) && (uVar5 = func_0x001033f0(), 1 < uVar5)) {
    lVar6 = func_0x00103350(0,param_1,0);
    if (lVar6 == -1) {
      if ((param_6 & 1) == 0) {
code_r0x0010fdba:
        piStack104 = (int *)0x0;
        lStack96 = 0;
        puVar11 = (undefined *)0xffffffffffffffff;
        goto code_r0x0010fd21;
      }
      goto code_r0x0010fc2a;
    }
    piStack104 = (int *)func_0x00103888((lVar6 + 1) * 4);
    if (piStack104 == (int *)0x0) {
      lStack96 = 0;
      if ((param_6 & 1) == 0) goto code_r0x0010fdba;
      goto code_r0x0010fc3e;
    }
    lVar7 = func_0x00103350(piStack104,param_1,lVar6 + 1);
    if (lVar7 == 0) {
      lStack96 = 0;
      goto code_r0x0010fc3e;
    }
    piStack104[lVar6] = 0;
    if (*piStack104 != 0) {
      bVar1 = false;
      piVar10 = piStack104;
      do {
        iVar2 = func_0x00103830();
        if (iVar2 == 0) {
          *piVar10 = 0xfffd;
          bVar1 = true;
        }
        piVar10 = piVar10 + 1;
      } while (*piVar10 != 0);
      iVar2 = func_0x00103330(piStack104);
      puVar11 = (undefined *)(long)iVar2;
      if (!bVar1) goto code_r0x0010ff48;
      puStack72 = (undefined *)func_0x001037b0(0,piStack104,0);
code_r0x0010fea0:
      puStack72 = puStack72 + 1;
      lStack96 = func_0x00103888();
      if (lStack96 == 0) {
        if ((param_6 & 1) == 0) {
          puVar11 = (undefined *)0xffffffffffffffff;
          goto code_r0x0010fd21;
        }
      }
      else {
        puVar8 = (undefined *)*param_4;
        piVar10 = piStack104;
        if (*piStack104 == 0) {
          puVar11 = (undefined *)0x0;
        }
        else {
          puVar11 = (undefined *)0x0;
          do {
            iVar2 = func_0x00103660();
            lVar6 = (long)iVar2;
            if (iVar2 == -1) {
              *piVar10 = 0xfffd;
              lVar6 = 1;
            }
            puVar4 = puVar11 + lVar6;
          } while ((puVar4 <= puVar8) && (piVar10 = piVar10 + 1, puVar11 = puVar4, *piVar10 != 0));
        }
        *piVar10 = 0;
        puVar8 = (undefined *)func_0x001037b0(lStack96,piStack104,puStack72);
        param_1 = lStack96;
      }
      goto code_r0x0010fc3e;
    }
    iVar2 = func_0x00103330(piStack104);
    puVar11 = (undefined *)(long)iVar2;
code_r0x0010ff48:
    puVar4 = (undefined *)*param_4;
    puStack72 = puVar8;
    if (puVar4 < puVar11) goto code_r0x0010fea0;
    lStack96 = 0;
code_r0x0010fd59:
    puVar3 = puVar8;
    puVar9 = puVar11;
    if (puVar4 <= puVar11) goto code_r0x0010fc50;
    puVar4 = puVar4 + -(long)puVar11;
    *(undefined **)param_4 = puVar11;
    if (param_5 != 0) goto code_r0x0010fc60;
code_r0x0010fd7b:
    puVar8 = (undefined *)0x0;
    puVar9 = puVar4;
  }
  else {
code_r0x0010fc2a:
    piStack104 = (int *)0x0;
    lStack96 = 0;
code_r0x0010fc3e:
    puVar4 = (undefined *)*param_4;
    puVar9 = puVar4;
    puVar3 = puVar4;
    if (puVar11 <= puVar4) goto code_r0x0010fd59;
code_r0x0010fc50:
    puVar4 = (undefined *)0x0;
    *(undefined **)param_4 = puVar9;
    if (param_5 == 0) goto code_r0x0010fd7b;
code_r0x0010fc60:
    puVar8 = puVar4;
    puVar9 = (undefined *)0x0;
    if (param_5 != 1) {
      puVar8 = (undefined *)((ulong)puVar4 >> 1) + ((uint)puVar4 & 1);
      puVar9 = (undefined *)((ulong)puVar4 >> 1);
    }
  }
  puVar11 = puVar8 + (long)puVar3;
  if ((param_6 & 4) != 0) {
    puVar8 = (undefined *)0x0;
    puVar11 = puVar3;
  }
  if ((param_6 & 8) == 0) {
    puVar11 = puVar11 + (long)puVar9;
  }
  else {
    puVar9 = (undefined *)0x0;
  }
  if (param_3 != 0) {
    puVar4 = param_2 + param_3 + -1;
    if ((param_2 < puVar4) && (puVar12 = param_2, puVar8 != (undefined *)0x0)) {
      do {
        puVar8 = puVar8 + -1;
        param_2 = puVar12 + 1;
        *puVar12 = 0x20;
        puVar12 = param_2;
      } while (param_2 < puVar4 && puVar8 != (undefined *)0x0);
    }
    *param_2 = 0;
    puVar8 = puVar4 + -(long)param_2;
    if (puVar3 < puVar4 + -(long)param_2) {
      puVar8 = puVar3;
    }
    puVar8 = (undefined *)func_0x00103740(param_2,param_1,puVar8);
    if ((puVar8 < puVar4) && (puVar3 = puVar8, puVar9 != (undefined *)0x0)) {
      do {
        puVar9 = puVar9 + -1;
        puVar8 = puVar3 + 1;
        *puVar3 = 0x20;
        puVar3 = puVar8;
      } while (puVar9 != (undefined *)0x0 && puVar8 < puVar4);
    }
    *puVar8 = 0;
  }
code_r0x0010fd21:
  func_0x00103880(piStack104);
  func_0x00103880(lStack96);
  return puVar11;
}

