
/* WARNING: Removing unreachable block (ram,0x00105600) */

uint * careadlinkatcwd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  long in_FS_OFFSET;
  uint auStack1104 [258];
  long lStack72;
  
  if ((int)param_1 == -100) {
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)PTR_readlink_0030ae70)(param_2,param_3,param_4);
    return (uint *)uVar3;
  }
  func_0x00101590();
  lStack72 = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = (uint *)0x400;
  puVar11 = auStack1104;
  do {
    while( true ) {
      puVar10 = (uint *)0xffffff9c;
      puVar4 = (uint *)careadlinkatcwd(0xffffff9c,param_1,puVar11,puVar8);
      if ((long)puVar4 < 0) {
        piVar5 = (int *)func_0x001015a0();
        iVar1 = *piVar5;
        if (iVar1 != 0x22) {
          if (auStack1104 == puVar11) {
            puVar11 = (uint *)0x0;
          }
          else {
            (*stdlib_allocator._16_8_)();
            *piVar5 = iVar1;
            puVar10 = puVar11;
            puVar11 = (uint *)0x0;
          }
          goto code_r0x0010558d;
        }
      }
      if (puVar4 < puVar8) {
        puVar9 = (uint *)((long)puVar4 + 1);
        *(undefined *)((long)puVar11 + (long)puVar4) = 0;
        if (puVar11 != auStack1104) {
          if ((((puVar9 < puVar8) && (auStack1104 != puVar11)) &&
              (stdlib_allocator._8_8_ != (code *)0x0)) &&
             (puVar10 = puVar11, puVar8 = (uint *)(*stdlib_allocator._8_8_)(puVar11,puVar9),
             puVar8 != (uint *)0x0)) {
            puVar11 = puVar8;
          }
          goto code_r0x0010558d;
        }
        puVar10 = puVar9;
        puVar11 = (uint *)(*stdlib_allocator._0_8_)();
        if (puVar11 != (uint *)0x0) {
          puVar10 = puVar11;
          func_0x00101720(puVar11,auStack1104,puVar9);
          goto code_r0x0010558d;
        }
        goto code_r0x00105571;
      }
      if (auStack1104 != puVar11) {
        (*stdlib_allocator._16_8_)();
        puVar10 = puVar11;
      }
      if (puVar8 < (uint *)0x4000000000000001) break;
      if ((long)puVar8 < 0) {
        puVar6 = (undefined4 *)func_0x001015a0();
        *puVar6 = 0x24;
        puVar11 = (uint *)0x0;
        goto code_r0x0010558d;
      }
      puVar8 = (uint *)0x8000000000000000;
      puVar10 = (uint *)0x8000000000000000;
      puVar11 = (uint *)(*stdlib_allocator._0_8_)();
      puVar9 = puVar8;
      if (puVar11 == (uint *)0x0) goto code_r0x00105571;
    }
    puVar8 = (uint *)((long)puVar8 * 2);
    puVar10 = puVar8;
    puVar11 = (uint *)(*stdlib_allocator._0_8_)();
    puVar9 = puVar8;
  } while (puVar11 != (uint *)0x0);
code_r0x00105571:
  if (stdlib_allocator._24_8_ != (code *)0x0) {
    (*stdlib_allocator._24_8_)();
    puVar10 = puVar9;
  }
  puVar6 = (undefined4 *)func_0x001015a0();
  *puVar6 = 0xc;
  puVar11 = (uint *)0x0;
code_r0x0010558d:
  if (lStack72 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar11;
  }
  func_0x00101650();
  lVar7 = func_0x001015d0();
  uVar2 = *puVar10;
  uVar3 = rpl_fclose(puVar10);
  if ((uVar2 & 0x20) == 0) {
    if (((int)uVar3 != 0) && (uVar3 = 0xffffffff, lVar7 == 0)) {
      piVar5 = (int *)func_0x001015a0();
      return (uint *)(ulong)-(uint)(*piVar5 != 9);
    }
    return (uint *)uVar3;
  }
  if ((int)uVar3 == 0) {
    puVar6 = (undefined4 *)func_0x001015a0();
    *puVar6 = 0;
    return (uint *)0xffffffff;
  }
  return (uint *)0xffffffff;
}

