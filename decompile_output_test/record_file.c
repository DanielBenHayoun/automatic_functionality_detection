
/* WARNING: Possible PIC construction at 0x00107467: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010746c) */

undefined8 * record_file(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined in_AL;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  
  if (param_1 == 0) {
    return (undefined8 *)_in_AL;
  }
  puVar1 = (undefined8 *)xmalloc(0x18);
  uVar2 = xstrdup(param_2);
  *puVar1 = uVar2;
  puVar1[1] = param_3[1];
  puVar1[2] = *param_3;
  puVar3 = (undefined8 *)hash_insert();
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar1 != puVar3) {
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)PTR_free_00313d30)(*puVar1);
      return (undefined8 *)uVar2;
    }
    return puVar3;
  }
  xalloc_die();
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = hash_lookup();
    uVar4 = uVar4 & 0xffffffffffffff00 | (ulong)(uVar4 != 0);
  }
  if (lVar7 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *)uVar4;
  }
  func_0x001021f0();
  if (param_1 < 10) {
    param_1 = 10;
  }
  param_1 = param_1 | 1;
  do {
    if (param_1 == 0xffffffffffffffff) {
      return (undefined8 *)0xffffffffffffffff;
    }
    uVar4 = param_1 % 3;
    if (param_1 < 10) {
code_r0x00106150:
      if (uVar4 != 0) {
        return (undefined8 *)param_1;
      }
    }
    else {
      if (uVar4 != 0) {
        lVar7 = 0x10;
        uVar6 = 9;
        uVar5 = 3;
        do {
          uVar5 = uVar5 + 2;
          uVar4 = param_1 % uVar5;
          uVar6 = uVar6 + lVar7;
          if (param_1 <= uVar6) goto code_r0x00106150;
          lVar7 = lVar7 + 8;
        } while (uVar4 != 0);
      }
    }
    param_1 = param_1 + 2;
  } while( true );
}

