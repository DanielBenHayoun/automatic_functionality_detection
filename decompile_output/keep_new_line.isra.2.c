
void keep_new_line_isra_2(long **param_1,long **param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if (*param_1 == (long *)0x0) {
    plVar4 = (long *)xmalloc(0x520);
    *param_2 = plVar4;
    plVar4[0xa3] = 0;
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    *param_1 = plVar4;
  }
  plVar4 = *param_2;
  lVar2 = *plVar4;
  if (lVar2 == 0x50) {
    puVar3 = (undefined8 *)xmalloc(0x520);
    puVar3[0xa3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined8 **)(plVar4 + 0xa3) = puVar3;
    plVar4 = (long *)(*param_2)[0xa3];
    *param_2 = plVar4;
    lVar2 = *plVar4;
  }
  lVar1 = plVar4[1];
  (plVar4 + lVar1 * 2)[4] = param_3;
  (plVar4 + lVar1 * 2)[3] = param_4;
  *plVar4 = lVar2 + 1;
  plVar4[1] = lVar1 + 1;
  return;
}

