
void extract_field(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  uVar4 = *(ulong *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  if (uVar4 <= uVar2) {
    if (lVar3 == 0) {
      if (uVar4 == 0) {
        uVar4 = 8;
      }
      bVar1 = false;
      lVar3 = SUB168(ZEXT816(0x10) * ZEXT816(uVar4),0);
      if (SUB168(ZEXT816(0x10) * ZEXT816(uVar4) >> 0x40,0) != 0) goto code_r0x001031da;
      goto code_r0x001031cb;
    }
    if (uVar4 < 0x555555555555555) {
      uVar4 = uVar4 + 1 + (uVar4 >> 1);
    }
    else {
      do {
        lVar3 = xalloc_die();
code_r0x001031da:
        bVar1 = true;
code_r0x001031cb:
      } while ((lVar3 < 0) || (bVar1));
    }
    *(ulong *)(param_1 + 0x20) = uVar4;
    lVar3 = xrealloc();
    *(long *)(param_1 + 0x28) = lVar3;
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  puVar5 = (undefined8 *)(lVar3 + uVar2 * 0x10);
  *puVar5 = param_2;
  puVar5[1] = param_3;
  *(long *)(param_1 + 0x18) = uVar2 + 1;
  return;
}

