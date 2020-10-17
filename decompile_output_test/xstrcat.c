
undefined * xstrcat(long param_1,uint *param_2)

{
  undefined auVar1 [16];
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long in_FS_OFFSET;
  bool bVar14;
  uint uStack88;
  undefined8 *puStack80;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
                    /* WARNING: Load size is inaccurate */
  auVar1 = *(undefined *)param_2;
  uStack88 = SUB164(auVar1,0);
  puStack80 = SUB168(auVar1 >> 0x40,0);
  lVar7 = *(long *)(param_2 + 4);
  if (param_1 == 0) {
    puVar10 = (undefined *)xmalloc(SUB168(auVar1,0),1);
    puVar13 = puVar10;
  }
  else {
    uVar9 = 0;
    lVar12 = param_1;
    do {
      if (uStack88 < 0x30) {
        uVar5 = (ulong)uStack88;
        uStack88 = uStack88 + 8;
        puVar6 = (undefined8 *)(uVar5 + lVar7);
      }
      else {
        puVar6 = puStack80;
        puStack80 = puStack80 + 1;
      }
      uVar5 = func_0x001013e0(*puVar6);
      bVar14 = CARRY8(uVar9,uVar5);
      uVar9 = uVar9 + uVar5;
      if (bVar14) {
        uVar9 = 0xffffffffffffffff;
      }
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    if (0x7fffffff < uVar9) goto code_r0x00105860;
    puVar13 = (undefined *)xmalloc(uVar9 + 1);
    puVar11 = puVar13;
    do {
      uVar2 = *param_2;
      if (uVar2 < 0x30) {
        puVar6 = (undefined8 *)((ulong)uVar2 + *(long *)(param_2 + 4));
        *param_2 = uVar2 + 8;
      }
      else {
        puVar6 = *(undefined8 **)(param_2 + 2);
        *(undefined8 **)(param_2 + 2) = puVar6 + 1;
      }
      uVar4 = *puVar6;
      lVar7 = func_0x001013e0(uVar4);
      puVar10 = puVar11 + lVar7;
      func_0x001014b0(puVar11,uVar4,lVar7);
      param_1 = param_1 + -1;
      puVar11 = puVar10;
    } while (param_1 != 0);
  }
  *puVar10 = 0;
  while( true ) {
    if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) break;
    func_0x00101400();
code_r0x00105860:
    puVar8 = (undefined4 *)func_0x00101330();
    puVar13 = (undefined *)0x0;
    *puVar8 = 0x4b;
  }
  return puVar13;
}

