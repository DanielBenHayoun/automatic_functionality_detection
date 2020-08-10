
void re_node_set_remove_at_isra_4_part_5(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  
  if ((param_3 < *param_1) && (lVar1 = *param_1 + -1, *param_1 = lVar1, param_3 < lVar1)) {
    lVar1 = *param_2;
    do {
      *(undefined8 *)(lVar1 + param_3 * 8) = *(undefined8 *)(lVar1 + 8 + param_3 * 8);
      param_3 = param_3 + 1;
    } while (param_3 < *param_1);
  }
  return;
}

