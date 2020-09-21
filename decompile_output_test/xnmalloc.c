
void xnmalloc(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong unaff_RBX;
  undefined *puVar3;
  
  while( true ) {
    uVar2 = SUB168(ZEXT816(param_1) * ZEXT816(param_2),0);
    if (((long)uVar2 < 0) ||
       (puVar3 = (undefined *)register0x00000020,
       SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) != 0)) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x1042d4;
      xalloc_die();
      puVar3 = (undefined *)register0x00000020 + -8;
    }
    register0x00000020 = (BADSPACEBASE *)(puVar3 + -8);
    *(ulong *)(puVar3 + -8) = unaff_RBX;
    *(undefined8 *)(puVar3 + -0x10) = 0x104299;
    param_1 = uVar2;
    lVar1 = func_0x00101360();
    if ((lVar1 != 0) || (uVar2 == 0)) break;
    *(undefined8 *)(puVar3 + -0x10) = 0x1042aa;
    xalloc_die();
    unaff_RBX = uVar2;
  }
  return;
}

