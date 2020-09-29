
uint * careadlinkat(uint param_1,undefined8 param_2,uint *param_3,uint *param_4,undefined1 *param_5,
                   code *param_6)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  long in_FS_OFFSET;
  uint auStack1096 [258];
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if ((code **)param_5 == (code **)0x0) {
    param_5 = stdlib_allocator;
  }
  puVar10 = param_3;
  if (param_4 == (uint *)0x0) {
    param_3 = auStack1096;
    param_4 = (uint *)0x400;
    puVar10 = param_3;
  }
  do {
    while( true ) {
      puVar9 = (uint *)(ulong)param_1;
      puVar3 = (uint *)(*param_6)((uint *)(ulong)param_1,param_2,param_3,param_4);
      if ((long)puVar3 < 0) {
        piVar4 = (int *)func_0x001015a0();
        iVar1 = *piVar4;
        if (iVar1 != 0x22) {
          if (puVar10 == param_3) {
            param_3 = (uint *)0x0;
          }
          else {
            (*((code **)param_5)[2])();
            *piVar4 = iVar1;
            puVar9 = param_3;
            param_3 = (uint *)0x0;
          }
          goto code_r0x0010558d;
        }
      }
      if (puVar3 < param_4) {
        puVar8 = (uint *)((long)puVar3 + 1);
        *(undefined *)((long)param_3 + (long)puVar3) = 0;
        if (param_3 != auStack1096) {
          if ((((puVar8 < param_4) && (puVar10 != param_3)) &&
              (((code **)param_5)[1] != (code *)0x0)) &&
             (puVar9 = param_3, puVar10 = (uint *)(*((code **)param_5)[1])(param_3,puVar8),
             puVar10 != (uint *)0x0)) {
            param_3 = puVar10;
          }
          goto code_r0x0010558d;
        }
        puVar9 = puVar8;
        param_3 = (uint *)(**(code **)param_5)();
        if (param_3 != (uint *)0x0) {
          puVar9 = param_3;
          func_0x00101720(param_3,auStack1096,puVar8);
          goto code_r0x0010558d;
        }
        goto code_r0x00105571;
      }
      if (puVar10 != param_3) {
        (*((code **)param_5)[2])();
        puVar9 = param_3;
      }
      if (param_4 < (uint *)0x4000000000000001) break;
      if ((long)param_4 < 0) {
        puVar5 = (undefined4 *)func_0x001015a0();
        *puVar5 = 0x24;
        param_3 = (uint *)0x0;
        goto code_r0x0010558d;
      }
      param_4 = (uint *)0x8000000000000000;
      puVar9 = (uint *)0x8000000000000000;
      param_3 = (uint *)(**(code **)param_5)();
      puVar8 = param_4;
      if (param_3 == (uint *)0x0) goto code_r0x00105571;
    }
    param_4 = (uint *)((long)param_4 * 2);
    puVar9 = param_4;
    param_3 = (uint *)(**(code **)param_5)();
    puVar8 = param_4;
  } while (param_3 != (uint *)0x0);
code_r0x00105571:
  if (((code **)param_5)[3] != (code *)0x0) {
    (*((code **)param_5)[3])();
    puVar9 = puVar8;
  }
  puVar5 = (undefined4 *)func_0x001015a0();
  *puVar5 = 0xc;
  param_3 = (uint *)0x0;
code_r0x0010558d:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
  func_0x00101650();
  lVar6 = func_0x001015d0();
  uVar2 = *puVar9;
  uVar7 = rpl_fclose(puVar9);
  if ((uVar2 & 0x20) != 0) {
    if ((int)uVar7 != 0) {
      return (uint *)0xffffffff;
    }
    puVar5 = (undefined4 *)func_0x001015a0();
    *puVar5 = 0;
    return (uint *)0xffffffff;
  }
  if (((int)uVar7 != 0) && (uVar7 = 0xffffffff, lVar6 == 0)) {
    piVar4 = (int *)func_0x001015a0();
    return (uint *)(ulong)-(uint)(*piVar4 != 9);
  }
  return (uint *)uVar7;
}

