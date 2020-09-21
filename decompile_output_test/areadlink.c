
/* WARNING: Removing unreachable block (ram,0x00105600) */

uint * areadlink(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  long in_FS_OFFSET;
  uint auStack1096 [258];
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = (uint *)0x400;
  puVar11 = auStack1096;
  do {
    while( true ) {
      puVar10 = (uint *)0xffffff9c;
      puVar3 = (uint *)careadlinkatcwd(0xffffff9c,param_1,puVar11,puVar8);
      if ((long)puVar3 < 0) {
        piVar4 = (int *)func_0x001015a0();
        iVar1 = *piVar4;
        if (iVar1 != 0x22) {
          if (auStack1096 == puVar11) {
            puVar11 = (uint *)0x0;
          }
          else {
            (*stdlib_allocator._16_8_)();
            *piVar4 = iVar1;
            puVar10 = puVar11;
            puVar11 = (uint *)0x0;
          }
          goto code_r0x0010558d;
        }
      }
      if (puVar3 < puVar8) {
        puVar9 = (uint *)((long)puVar3 + 1);
        *(undefined *)((long)puVar11 + (long)puVar3) = 0;
        if (puVar11 != auStack1096) {
          if ((((puVar9 < puVar8) && (auStack1096 != puVar11)) &&
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
          func_0x00101720(puVar11,auStack1096,puVar9);
          goto code_r0x0010558d;
        }
        goto code_r0x00105571;
      }
      if (auStack1096 != puVar11) {
        (*stdlib_allocator._16_8_)();
        puVar10 = puVar11;
      }
      if (puVar8 < (uint *)0x4000000000000001) break;
      if ((long)puVar8 < 0) {
        puVar5 = (undefined4 *)func_0x001015a0();
        *puVar5 = 0x24;
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
  puVar5 = (undefined4 *)func_0x001015a0();
  *puVar5 = 0xc;
  puVar11 = (uint *)0x0;
code_r0x0010558d:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar11;
  }
  func_0x00101650();
  lVar6 = func_0x001015d0();
  uVar2 = *puVar10;
  uVar7 = rpl_fclose(puVar10);
  if ((uVar2 & 0x20) == 0) {
    if (((int)uVar7 != 0) && (uVar7 = 0xffffffff, lVar6 == 0)) {
      piVar4 = (int *)func_0x001015a0();
      return (uint *)(ulong)-(uint)(*piVar4 != 9);
    }
    return (uint *)uVar7;
  }
  if ((int)uVar7 == 0) {
    puVar5 = (undefined4 *)func_0x001015a0();
    *puVar5 = 0;
    return (uint *)0xffffffff;
  }
  return (uint *)0xffffffff;
}

