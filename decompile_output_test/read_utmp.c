
undefined8 read_utmp(undefined8 param_1,ulong *param_2,long *param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  
  bVar12 = 0;
  lVar5 = 0;
  uVar8 = 0;
  uVar9 = 0;
  func_0x001017f0();
  func_0x001019f0();
code_r0x00105fe6:
  puVar10 = (undefined8 *)func_0x00101ae0();
  do {
    if (puVar10 == (undefined8 *)0x0) {
      func_0x001018c0();
      *param_2 = uVar8;
      *param_3 = lVar5;
      return 0;
    }
    if ((*(short *)puVar10 == 7) && (*(char *)((long)puVar10 + 0x2c) != '\0')) {
      if ((((0 < *(int *)((long)puVar10 + 4)) && ((param_4 & 1) != 0)) &&
          (iVar2 = func_0x00101a10(), iVar2 < 0)) &&
         (piVar4 = (int *)func_0x00101840(), *piVar4 == 3)) goto code_r0x00105fe6;
    }
    else {
      if ((param_4 & 2) != 0) goto code_r0x00105fe6;
    }
    if (uVar9 == uVar8) {
      if (lVar5 == 0) {
        if (uVar9 == 0) {
          uVar9 = 1;
        }
        bVar1 = false;
        lVar6 = SUB168(ZEXT816(0x180) * ZEXT816(uVar9),0);
        if (SUB168(ZEXT816(0x180) * ZEXT816(uVar9) >> 0x40,0) != 0) goto code_r0x00106132;
        goto code_r0x00106123;
      }
      if (uVar9 < 0x38e38e38e38e38) {
        uVar9 = uVar9 + 1 + (uVar9 >> 1);
      }
      else {
        do {
          lVar6 = xalloc_die();
code_r0x00106132:
          bVar1 = true;
code_r0x00106123:
        } while ((lVar6 < 0) || (bVar1));
      }
      lVar5 = xrealloc(lVar5,uVar9 * 0x180);
    }
    puVar11 = (undefined8 *)(uVar8 * 0x180 + lVar5);
    *puVar11 = *puVar10;
    puVar11[0x2f] = puVar10[0x2f];
    puVar3 = (undefined8 *)
             ((long)puVar11 - (long)(undefined8 *)((ulong)(puVar11 + 1) & 0xfffffffffffffff8));
    uVar7 = (ulong)((int)puVar3 + 0x180U >> 3);
    puVar10 = (undefined8 *)((long)puVar10 - (long)puVar3);
    puVar11 = (undefined8 *)((ulong)(puVar11 + 1) & 0xfffffffffffffff8);
    while (uVar7 != 0) {
      uVar7 = uVar7 - 1;
      *puVar11 = *puVar10;
      puVar10 = puVar10 + (ulong)bVar12 * 0x1ffffffffffffffe + 1;
      puVar11 = puVar11 + (ulong)bVar12 * 0x1ffffffffffffffe + 1;
    }
    puVar10 = (undefined8 *)func_0x00101ae0();
    uVar8 = uVar8 + 1;
  } while( true );
}

