
undefined8
get_subexp_sub_isra_32
          (long param_1,long *param_2,undefined8 *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  uVar4 = check_arrival(param_1,param_3 + 2,*param_3,param_3[1],param_4,param_5,8);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  lVar5 = *(long *)(param_1 + 200);
  lVar7 = param_3[1];
  lVar2 = *param_2;
  lVar8 = *(long *)(param_1 + 0xd8);
  lVar6 = lVar7;
  if (*(long *)(param_1 + 0xd0) <= lVar5) {
    lVar5 = func_0x00101b30(lVar8,*(long *)(param_1 + 0xd0) * 0x50);
    if (lVar5 == 0) {
      func_0x00101880(*(undefined8 *)(param_1 + 0xd8));
      return 0xc;
    }
    *(long *)(param_1 + 0xd8) = lVar5;
    func_0x00101a10(lVar5 + *(long *)(param_1 + 200) * 0x28,0,*(long *)(param_1 + 0xd0) * 0x28);
    *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) << 1;
    lVar5 = *(long *)(param_1 + 200);
    lVar8 = *(long *)(param_1 + 0xd8);
    lVar6 = param_3[1];
  }
  if ((0 < lVar5) && (lVar1 = lVar8 + -0x28 + lVar5 * 0x28, param_5 == *(long *)(lVar1 + 8))) {
    *(undefined *)(lVar1 + 0x20) = 1;
  }
  puVar9 = (undefined8 *)(lVar8 + lVar5 * 0x28);
  *puVar9 = param_4;
  puVar9[1] = param_5;
  puVar9[2] = lVar2;
  *(short *)((long)puVar9 + 0x22) = -(ushort)(lVar7 == lVar2);
  puVar9[3] = lVar7;
  *(long *)(param_1 + 200) = lVar5 + 1;
  *(undefined *)(puVar9 + 4) = 0;
  if ((long)*(int *)(param_1 + 0xe0) < lVar7 - lVar2) {
    *(int *)(param_1 + 0xe0) = (int)lVar7 - (int)lVar2;
  }
  lVar7 = (lVar6 + param_5) - *param_2;
  lVar5 = *(long *)(param_1 + 0xc0);
  if ((lVar7 < *(long *)(param_1 + 0x40)) ||
     (*(long *)(param_1 + 0x58) <= *(long *)(param_1 + 0x40))) {
    if ((lVar7 < *(long *)(param_1 + 0x30)) ||
       (*(long *)(param_1 + 0x58) <= *(long *)(param_1 + 0x30))) goto code_r0x00106adf;
    uVar4 = extend_buffers(param_1,(ulong)((int)lVar7 + 1));
    iVar3 = (int)uVar4;
  }
  else {
    uVar4 = extend_buffers(param_1,(ulong)((int)lVar7 + 1));
    iVar3 = (int)uVar4;
  }
  if (iVar3 != 0) {
    return uVar4;
  }
code_r0x00106adf:
  if (lVar5 < lVar7) {
    func_0x00101a10(*(long *)(param_1 + 0xb8) + 8 + lVar5 * 8,0,(lVar7 - lVar5) * 8);
    *(long *)(param_1 + 0xc0) = lVar7;
  }
  return 0;
}

