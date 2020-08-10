
undefined8 re_node_set_init_copy(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  param_1[1] = lVar2;
  lVar1 = *(long *)(param_2 + 8);
  if (0 < lVar1) {
    *param_1 = lVar2;
    lVar2 = func_0x00101ac0(lVar2 * 8);
    param_1[2] = lVar2;
    if (lVar2 == 0) {
      param_1[1] = 0;
      *param_1 = 0;
      uVar3 = 0xc;
    }
    else {
      func_0x00101a90(lVar2,*(undefined8 *)(param_2 + 0x10),lVar1 * 8);
      uVar3 = 0;
    }
    return uVar3;
  }
  param_1[2] = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((long)param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return 0;
}

