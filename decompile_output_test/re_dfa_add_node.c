
long re_dfa_add_node(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  
  uVar8 = param_1[2];
  uVar2 = param_1[1];
  if (uVar8 < uVar2) {
    lVar4 = param_1[3];
    lVar6 = param_1[5];
code_r0x00108e9d:
    puVar3 = (undefined8 *)(uVar8 * 0x10 + *param_1);
    puVar3[1] = param_3;
    *(uint *)(puVar3 + 1) = (uint)param_3 & 0xfffc00ff;
    bVar9 = (char)param_3 == '\x06';
    *puVar3 = param_2;
    if ((char)param_3 == '\x05') {
      bVar9 = 1 < *(int *)((long)param_1 + 0xb4);
    }
    *(byte *)((long)puVar3 + 10) = *(byte *)((long)puVar3 + 10) & 0xef | bVar9 << 4;
    *(undefined8 *)(lVar4 + uVar8 * 8) = 0xffffffffffffffff;
    puVar1 = (undefined4 *)(lVar6 + param_1[2] * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    puVar1 = (undefined4 *)(param_1[6] + param_1[2] * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    lVar4 = param_1[2];
    param_1[2] = lVar4 + 1;
  }
  else {
    if (uVar2 * 2 < 0xaaaaaaaaaaaaaab) {
      lVar4 = func_0x00101e00(*param_1,uVar2 << 5);
      if (lVar4 != 0) {
        *param_1 = lVar4;
        lVar4 = func_0x00101e00(param_1[3],uVar2 << 4);
        lVar5 = func_0x00101e00(param_1[4],uVar2 << 4);
        lVar6 = func_0x00101e00(param_1[5],uVar2 * 0x30);
        lVar7 = func_0x00101e00(param_1[6],uVar2 * 0x30);
        if ((((lVar4 != 0) && (lVar5 != 0)) && (lVar6 != 0)) && (lVar7 != 0)) {
          param_1[3] = lVar4;
          param_1[4] = lVar5;
          param_1[5] = lVar6;
          param_1[6] = lVar7;
          param_1[1] = uVar2 * 2;
          uVar8 = param_1[2];
          goto code_r0x00108e9d;
        }
        func_0x00101b00(lVar4);
        func_0x00101b00(lVar5);
        func_0x00101b00(lVar6);
        func_0x00101b00(lVar7);
      }
    }
    lVar4 = -1;
  }
  return lVar4;
}

