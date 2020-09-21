
undefined8 _obstack_begin_worker(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  long extraout_RDX;
  long *unaff_RBX;
  long unaff_RBP;
  ulong uVar3;
  long *plVar4;
  long unaff_R12;
  
  while( true ) {
    *(long *)((undefined *)register0x00000020 + -8) = unaff_R12;
    *(long *)((undefined *)register0x00000020 + -0x10) = unaff_RBP;
    *(long **)((undefined *)register0x00000020 + -0x18) = unaff_RBX;
    if (param_3 == 0) {
      unaff_R12 = 0xf;
      unaff_RBP = 0x10;
    }
    else {
      unaff_R12 = param_3 + -1;
      unaff_RBP = param_3;
    }
    param_1[6] = unaff_R12;
    if (param_2 == 0) {
      param_2 = 0xfe0;
    }
    *param_1 = param_2;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = 0x106b9e;
    plVar4 = param_1;
    plVar2 = (long *)call_chunkfun();
    *(long **)(param_1 + 1) = plVar2;
    if (plVar2 != (long *)0x0) break;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = 0x106bf3;
    (*obstack_alloc_failed_handler)();
    *(byte *)(plVar4 + 10) = *(byte *)(plVar4 + 10) & 0xfe;
    plVar4[7] = param_4;
    plVar4[8] = param_5;
    param_3 = extraout_RDX;
    unaff_RBX = param_1;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x18);
    param_1 = plVar4;
  }
  uVar3 = -unaff_RBP & (long)plVar2 + unaff_R12 + 0x10;
  lVar1 = *param_1;
  param_1[2] = uVar3;
  param_1[3] = uVar3;
  *plVar2 = lVar1 + (long)plVar2;
  param_1[4] = lVar1 + (long)plVar2;
  plVar2[1] = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf9;
  return 1;
}

