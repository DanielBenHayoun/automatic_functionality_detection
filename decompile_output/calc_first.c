
undefined8 calc_first(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x30) != '\x10') {
    *(long *)(param_2 + 0x18) = param_2;
    lVar1 = re_dfa_add_node(param_1,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30))
    ;
    *(long *)(param_2 + 0x38) = lVar1;
    if (lVar1 == -1) {
      uVar2 = 0xc;
    }
    else {
      uVar2 = 0;
      if (*(char *)(param_2 + 0x30) == '\f') {
        lVar1 = lVar1 * 0x10 + *param_1;
        *(uint *)(lVar1 + 8) =
             *(uint *)(lVar1 + 8) & 0xfffc00ff | (*(uint *)(param_2 + 0x28) & 0x3ff) << 8;
      }
    }
    return uVar2;
  }
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x38);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(*(long *)(param_2 + 8) + 0x18);
  *(undefined8 *)(param_2 + 0x38) = uVar2;
  return 0;
}

