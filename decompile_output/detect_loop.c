
undefined8 detect_loop(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long **pplVar4;
  
  if (param_1[4] == 0) {
    return 0;
  }
  if (loop == (undefined8 *)0x0) {
    loop = param_1;
    return 0;
  }
  plVar2 = (long *)param_1[6];
  if (plVar2 != (long *)0x0) {
    if (loop == (undefined8 *)*plVar2) {
      pplVar4 = (long **)(param_1 + 6);
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)plVar3[1];
        if (plVar2 == (long *)0x0) {
          return 0;
        }
      } while (loop != (undefined8 *)*plVar2);
      pplVar4 = (long **)(plVar3 + 1);
    }
    if (param_1[5] != 0) {
      do {
        puVar1 = (undefined8 *)loop[5];
        func_0x00101640(0,0,&UNK_00105bc7,*loop);
        if (param_1 == loop) {
          plVar3 = (long *)(*pplVar4)[1];
          plVar2 = (long *)(**pplVar4 + 0x20);
          *plVar2 = *plVar2 + -1;
          *pplVar4 = plVar3;
          do {
            puVar1 = (undefined8 *)param_1[5];
            param_1[5] = 0;
            param_1 = puVar1;
          } while (puVar1 != (undefined8 *)0x0);
          loop = (undefined8 *)0x0;
          return 1;
        }
        loop[5] = 0;
        loop = puVar1;
      } while (puVar1 != (undefined8 *)0x0);
      return 1;
    }
    *(undefined8 **)(param_1 + 5) = loop;
    loop = param_1;
  }
  return 0;
}

