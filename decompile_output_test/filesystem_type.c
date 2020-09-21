
undefined8 filesystem_type(long param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined8 auStack184 [2];
  undefined8 auStack168 [15];
  long lStack48;
  
  lVar3 = *(long *)(param_1 + 0x50);
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(lVar3 + 0x49) & 2) == 0) {
code_r0x00106f72:
    uVar7 = 0;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x50);
    if (lVar4 == 0) {
      lVar4 = hash_initialize(0xd,0,dev_type_hash,dev_type_compare,PTR_free_0030efc0);
      *(long *)(lVar3 + 0x50) = lVar4;
      if (lVar4 != 0) goto code_r0x00106f19;
code_r0x00106f6d:
      if (((int)param_2 < 0) ||
         (iVar2 = func_0x00101d50((ulong)param_2,auStack168), uVar7 = auStack168[0], iVar2 != 0))
      goto code_r0x00106f72;
      if ((lVar4 != 0) &&
         (puVar5 = (undefined8 *)func_0x00101c40(0x10), puVar5 != (undefined8 *)0x0)) {
        uVar1 = *(undefined8 *)(param_1 + 0x78);
        puVar5[1] = uVar7;
        *puVar5 = uVar1;
        puVar6 = (undefined8 *)hash_insert(lVar4,puVar5);
        if (puVar6 == (undefined8 *)0x0) {
          func_0x00101de0(puVar5);
          uVar7 = auStack168[0];
        }
        else {
          uVar7 = auStack168[0];
          if (puVar5 != puVar6) goto code_r0x00107007;
        }
      }
    }
    else {
code_r0x00106f19:
      auStack184[0] = *(undefined8 *)(param_1 + 0x78);
      lVar3 = hash_lookup(lVar4,auStack184);
      if (lVar3 == 0) goto code_r0x00106f6d;
      uVar7 = *(undefined8 *)(lVar3 + 8);
    }
  }
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
  func_0x00101ad0();
code_r0x00107007:
  func_0x001019b0();
  lVar3 = filesystem_type();
  if (lVar3 == 0x52654973) {
    return 2;
  }
  if (lVar3 < 0x52654974) {
    if (((lVar3 == 0x6969) || (lVar3 == 0x9fa0)) || (lVar3 == 0)) {
      return 0;
    }
  }
  else {
    if (lVar3 == 0x58465342) {
      return 2;
    }
    if (lVar3 == 0xff534d42) {
      return 0;
    }
    if (lVar3 == 0x5346414f) {
      return 0;
    }
  }
  return 1;
}

