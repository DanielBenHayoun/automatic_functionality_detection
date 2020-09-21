
void xmalloc(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong unaff_RBX;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = (undefined *)register0x00000020;
  while( true ) {
    uVar4 = param_1;
    puVar3 = puVar1;
    *(ulong *)(puVar3 + -8) = unaff_RBX;
    *(undefined8 *)(puVar3 + -0x10) = 0x104299;
    uVar5 = uVar4;
    lVar2 = func_0x00101360();
    if ((lVar2 != 0) || (uVar4 == 0)) break;
    *(undefined8 *)(puVar3 + -0x10) = 0x1042aa;
    xalloc_die();
    param_1 = SUB168(ZEXT816(uVar5) * ZEXT816(param_2),0);
    unaff_RBX = uVar4;
    if (((long)param_1 < 0) ||
       (puVar1 = puVar3 + -8, SUB168(ZEXT816(uVar5) * ZEXT816(param_2) >> 0x40,0) != 0)) {
      *(undefined8 *)(puVar3 + -0x18) = 0x1042d4;
      xalloc_die();
      puVar1 = puVar3 + -0x10;
    }
  }
  return;
}

