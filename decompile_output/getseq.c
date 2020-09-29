
void getseq(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = *param_2;
  uVar4 = param_2[2];
  if (uVar7 == param_2[1]) {
    if (uVar4 == 0) {
      if (uVar7 == 0) {
        uVar7 = 0x10;
      }
      bVar2 = false;
      lVar6 = SUB168(ZEXT816(8) * ZEXT816(uVar7),0);
      if (SUB168(ZEXT816(8) * ZEXT816(uVar7) >> 0x40,0) != 0) goto code_r0x001036b2;
      goto code_r0x001036a3;
    }
    if (uVar7 < 0xaaaaaaaaaaaaaaa) {
      uVar7 = uVar7 + 1 + (uVar7 >> 1);
    }
    else {
      do {
        lVar6 = xalloc_die();
code_r0x001036b2:
        bVar2 = true;
code_r0x001036a3:
      } while ((lVar6 < 0) || (bVar2));
    }
    param_2[1] = uVar7;
    uVar4 = xrealloc();
    uVar7 = *param_2;
    uVar1 = param_2[1];
    param_2[2] = uVar4;
    if (uVar7 < uVar1) {
      puVar5 = (undefined8 *)(uVar4 + uVar7 * 8);
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (puVar5 != (undefined8 *)(uVar4 + uVar1 * 8));
    }
  }
  cVar3 = get_line(param_1,uVar4 + uVar7 * 8,param_3 & 0xffffffff);
  if (cVar3 != '\0') {
    *param_2 = *param_2 + 1;
  }
  return;
}

