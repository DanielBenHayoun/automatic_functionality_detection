
undefined8 calc_next(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  if (*(char *)(param_2 + 0x30) == '\v') {
    *(long *)(lVar1 + 0x20) = param_2;
    return 0;
  }
  if (*(char *)(param_2 + 0x30) != '\x10') {
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    }
    if (*(long *)(param_2 + 0x10) != 0) {
      *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x20) = *(undefined8 *)(param_2 + 0x20);
    }
    return 0;
  }
  lVar2 = *(long *)(param_2 + 0x10);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return 0;
}

