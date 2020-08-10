
undefined8 readtokens0_init(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long extraout_RDX;
  long *unaff_RBX;
  undefined *puVar4;
  long unaff_RBP;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  long unaff_R12;
  
  puVar2 = PTR_malloc_00309fd8;
  puVar9 = PTR_free_00309fb8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _obstack_begin(param_1 + 3,0,0,puVar2,puVar9);
  _obstack_begin(param_1 + 0xe,0,0,puVar2,puVar9);
  lVar3 = 0;
  lVar6 = 0;
  puVar4 = (undefined *)register0x00000020;
  plVar8 = param_1 + 0x19;
  while( true ) {
    *(byte *)(plVar8 + 10) = *(byte *)(plVar8 + 10) & 0xfe;
    *(undefined **)(plVar8 + 7) = puVar2;
    *(undefined **)(plVar8 + 8) = puVar9;
    *(long *)(puVar4 + -8) = unaff_R12;
    *(long *)(puVar4 + -0x10) = unaff_RBP;
    *(long **)(puVar4 + -0x18) = unaff_RBX;
    if (lVar3 == 0) {
      unaff_R12 = 0xf;
      unaff_RBP = 0x10;
    }
    else {
      unaff_R12 = lVar3 + -1;
      unaff_RBP = lVar3;
    }
    plVar8[6] = unaff_R12;
    if (lVar6 == 0) {
      lVar6 = 0xfe0;
    }
    *plVar8 = lVar6;
    *(undefined8 *)(puVar4 + -0x20) = 0x106b9e;
    plVar7 = plVar8;
    plVar1 = (long *)call_chunkfun();
    *(long **)(plVar8 + 1) = plVar1;
    if (plVar1 != (long *)0x0) break;
    *(undefined8 *)(puVar4 + -0x20) = 0x106bf3;
    (*obstack_alloc_failed_handler)();
    lVar3 = extraout_RDX;
    unaff_RBX = plVar8;
    puVar4 = puVar4 + -0x18;
    plVar8 = plVar7;
  }
  uVar5 = -unaff_RBP & (long)plVar1 + unaff_R12 + 0x10;
  lVar3 = *plVar8;
  plVar8[2] = uVar5;
  plVar8[3] = uVar5;
  *plVar1 = lVar3 + (long)plVar1;
  plVar8[4] = lVar3 + (long)plVar1;
  plVar1[1] = 0;
  *(byte *)(plVar8 + 10) = *(byte *)(plVar8 + 10) & 0xf9;
  return 1;
}

