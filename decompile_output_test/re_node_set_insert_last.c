
undefined8 re_node_set_insert_last(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  lVar1 = param_1[2];
  if (*param_1 == lVar2) {
    *param_1 = (lVar2 + 1) * 2;
    lVar1 = func_0x00101e00(lVar1,(lVar2 + 1) * 0x10);
    if (lVar1 == 0) {
      return 0;
    }
    param_1[2] = lVar1;
    lVar2 = param_1[1];
  }
  param_1[1] = lVar2 + 1;
  *(undefined8 *)(lVar1 + lVar2 * 8) = param_2;
  return 1;
}

