
ulong try_tempname(long param_1,int param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  piVar3 = (int *)func_0x001017b0();
  iVar7 = *piVar3;
  uVar4 = func_0x001018b0(param_1);
  if ((long)param_2 + 6U <= uVar4) {
    lVar8 = (uVar4 - 6) - (long)param_2;
    puVar1 = (undefined *)(param_1 + lVar8);
    uVar4 = func_0x00101970(puVar1,&UNK_00107846);
    if (5 < uVar4) {
      lVar5 = randint_all_new(0,6);
      if (lVar5 == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        iVar9 = 0x3a2f8;
        puVar10 = puVar1;
        do {
          do {
            puVar11 = puVar10 + 1;
            lVar6 = randint_genmax(lVar5,0x3d);
            *puVar10 = letters[lVar6];
            puVar10 = puVar11;
          } while (puVar11 != (undefined *)(lVar8 + param_1 + 6));
          uVar2 = (*param_4)(param_1,param_3);
          if (-1 < (int)uVar2) {
            *piVar3 = iVar7;
code_r0x001049b6:
            randint_all_free(lVar5);
            *piVar3 = iVar7;
            goto code_r0x001049d3;
          }
          if (*piVar3 != 0x11) {
            uVar2 = 0xffffffff;
            iVar7 = *piVar3;
            goto code_r0x001049b6;
          }
          iVar9 = iVar9 + -1;
          puVar10 = puVar1;
        } while (iVar9 != 0);
        randint_all_free(lVar5);
        uVar2 = 0xffffffff;
        *piVar3 = 0x11;
      }
      goto code_r0x001049d3;
    }
  }
  uVar2 = 0xffffffff;
  *piVar3 = 0x16;
code_r0x001049d3:
  return (ulong)uVar2;
}

