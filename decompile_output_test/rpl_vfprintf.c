
ulong rpl_vfprintf(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  long in_FS_OFFSET;
  ulong uStack2064;
  uint auStack2056 [502];
  long lStack48;
  
  uStack2064 = 2000;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  puVar10 = (uint *)vasnprintf(auStack2056,&uStack2064,param_2,param_3);
  uVar8 = uStack2064;
  if (puVar10 != (uint *)0x0) {
    puVar9 = puVar10;
    uVar3 = func_0x00102af0(puVar10,1,uStack2064,param_1);
    if (uVar3 < uVar8) {
      uVar8 = 0xffffffff;
      if (puVar10 != auStack2056) {
        puVar4 = (undefined4 *)func_0x00102780();
        uVar1 = *puVar4;
        func_0x00102750();
        *puVar4 = uVar1;
        puVar9 = puVar10;
      }
      goto code_r0x0010d846;
    }
    if (puVar10 != auStack2056) {
      func_0x00102750();
      puVar9 = puVar10;
    }
    if (uVar8 < 0x80000000) goto code_r0x0010d846;
    puVar4 = (undefined4 *)func_0x00102780();
    *puVar4 = 0x4b;
  }
  uVar8 = 0xffffffff;
  fseterr();
  puVar9 = param_1;
code_r0x0010d846:
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8 & 0xffffffff;
  }
  func_0x00102850();
  lVar5 = func_0x001027c0();
  uVar2 = *puVar9;
  uVar6 = rpl_fclose(puVar9);
  if ((uVar2 & 0x20) == 0) {
    if (((int)uVar6 != 0) && (uVar6 = 0xffffffff, lVar5 == 0)) {
      piVar7 = (int *)func_0x00102780();
      return (ulong)-(uint)(*piVar7 != 9);
    }
    return uVar6;
  }
  if ((int)uVar6 == 0) {
    puVar4 = (undefined4 *)func_0x00102780();
    *puVar4 = 0;
    return 0xffffffff;
  }
  return 0xffffffff;
}

