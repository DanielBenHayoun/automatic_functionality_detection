
/* WARNING: Possible PIC construction at 0x0010ead7: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010eadc) */

undefined8 * record_file(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined in_AL;
  undefined uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *extraout_RDX;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  long in_FS_OFFSET;
  undefined8 *puStack80;
  undefined8 uStack72;
  undefined8 uStack64;
  long lStack56;
  undefined *puStack48;
  
  if (param_1 == 0) {
    return (undefined8 *)_in_AL;
  }
  puStack48 = &UNK_0010cdf2;
  puVar4 = (undefined8 *)xmalloc(0x18);
  puStack48 = &UNK_0010cdfd;
  uVar5 = xstrdup(param_2);
  *puVar4 = uVar5;
  puVar4[1] = param_3[1];
  puVar4[2] = *param_3;
  puStack48 = &UNK_0010ce1b;
  puVar9 = puVar4;
  puVar6 = (undefined8 *)hash_insert();
  if (puVar6 != (undefined8 *)0x0) {
    if (puVar4 != puVar6) {
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)PTR_free_0031ffc0)(*puVar4);
      return (undefined8 *)uVar5;
    }
    return puVar6;
  }
  puStack48 = &UNK_0010ce57;
  xalloc_die();
  ppuVar10 = &puStack80;
  lStack56 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = 0;
  if (param_1 != 0) {
    uStack72 = extraout_RDX[1];
    uStack64 = *extraout_RDX;
    puStack80 = puVar9;
    uVar7 = hash_lookup();
    uVar7 = uVar7 & 0xffffffffffffff00 | (ulong)(uVar7 != 0);
    puVar9 = ppuVar10;
  }
  if (lStack56 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *)uVar7;
  }
  func_0x00103420();
  uVar2 = 0x2d;
  uVar8 = (uint)param_1 & 0xf000;
  if ((((uVar8 != 0x8000) && (uVar2 = 100, uVar8 != 0x4000)) && (uVar2 = 0x62, uVar8 != 0x6000)) &&
     (((uVar2 = 99, uVar8 != 0x2000 && (uVar2 = 0x6c, uVar8 != 0xa000)) &&
      ((uVar2 = 0x70, uVar8 != 0x1000 && (uVar2 = 0x73, uVar8 != 0xc000)))))) {
    uVar2 = 0x3f;
  }
  *(undefined *)puVar9 = uVar2;
  *(char *)((long)puVar9 + 1) = (-((param_1 & 0x100) == 0) & 0xbbU) + 0x72;
  *(char *)((long)puVar9 + 2) = (-((param_1 & 0x80) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 0x40) == 0);
  if ((param_1 & 0x800) == 0) {
    cVar3 = (bVar1 & 0xb5) + 0x78;
  }
  else {
    cVar3 = (bVar1 & 0xe0) + 0x73;
  }
  *(char *)((long)puVar9 + 3) = cVar3;
  *(char *)((long)puVar9 + 4) = (-((param_1 & 0x20) == 0) & 0xbbU) + 0x72;
  *(char *)((long)puVar9 + 5) = (-((param_1 & 0x10) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 8) == 0);
  if ((param_1 & 0x400) == 0) {
    cVar3 = (bVar1 & 0xb5) + 0x78;
  }
  else {
    cVar3 = (bVar1 & 0xe0) + 0x73;
  }
  *(char *)((long)puVar9 + 6) = cVar3;
  *(char *)((long)puVar9 + 7) = (-((param_1 & 4) == 0) & 0xbbU) + 0x72;
  *(byte *)(puVar9 + 1) = (-((param_1 & 2) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 1) == 0);
  if ((param_1 & 0x200) != 0) {
    *(char *)((long)puVar9 + 9) = (bVar1 & 0xe0) + 0x74;
    *(undefined2 *)((long)puVar9 + 10) = 0x20;
    return (undefined8 *)0x20;
  }
  *(char *)((long)puVar9 + 9) = (bVar1 & 0xb5) + 0x78;
  *(undefined2 *)((long)puVar9 + 10) = 0x20;
  return (undefined8 *)0x20;
}

