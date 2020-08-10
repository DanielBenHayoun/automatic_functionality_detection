
undefined8
_obstack_begin_1(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  long *plVar2;
  long extraout_RDX;
  long *unaff_RBX;
  undefined *puVar3;
  ulong uVar4;
  long unaff_RBP;
  long *plVar5;
  long unaff_R12;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  param_1[7] = param_4;
  param_1[8] = param_5;
  param_1[9] = param_6;
  puVar3 = (undefined *)register0x00000020;
  while( true ) {
    *(long *)(puVar3 + -8) = unaff_R12;
    *(long *)(puVar3 + -0x10) = unaff_RBP;
    *(long **)(puVar3 + -0x18) = unaff_RBX;
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
    *(undefined8 *)(puVar3 + -0x20) = 0x106b9e;
    plVar5 = param_1;
    plVar2 = (long *)call_chunkfun();
    *(long **)(param_1 + 1) = plVar2;
    if (plVar2 != (long *)0x0) break;
    *(undefined8 *)(puVar3 + -0x20) = 0x106bf3;
    (*obstack_alloc_failed_handler)();
    *(byte *)(plVar5 + 10) = *(byte *)(plVar5 + 10) & 0xfe;
    plVar5[7] = param_4;
    plVar5[8] = param_5;
    param_3 = extraout_RDX;
    unaff_RBX = param_1;
    puVar3 = puVar3 + -0x18;
    param_1 = plVar5;
  }
  uVar4 = -unaff_RBP & (long)plVar2 + unaff_R12 + 0x10;
  lVar1 = *param_1;
  param_1[2] = uVar4;
  param_1[3] = uVar4;
  *plVar2 = lVar1 + (long)plVar2;
  param_1[4] = lVar1 + (long)plVar2;
  plVar2[1] = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf9;
  return 1;
}

