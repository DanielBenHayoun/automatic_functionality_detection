
/* WARNING: Removing unreachable block (ram,0x00101f08) */
/* WARNING: Removing unreachable block (ram,0x00101f0f) */
/* WARNING: Removing unreachable block (ram,0x00101f17) */
/* WARNING: Removing unreachable block (ram,0x00101f27) */
/* WARNING: Removing unreachable block (ram,0x00101f47) */
/* WARNING: Removing unreachable block (ram,0x00101f56) */
/* WARNING: Removing unreachable block (ram,0x00101f38) */
/* WARNING: Removing unreachable block (ram,0x00101f5e) */
/* WARNING: Removing unreachable block (ram,0x00101f67) */

ulong num_processors_via_affinity_mask(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  long in_FS_OFFSET;
  undefined auStack152 [136];
  long lStack16;
  
  pbVar7 = (byte *)0x0;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = func_0x001016a0(0,0x80,auStack152);
  if (iVar1 == 0) {
    pbVar7 = (byte *)0x80;
    iVar1 = func_0x00101480(0x80,auStack152);
    lVar2 = (long)iVar1;
    if (lVar2 == 0) goto code_r0x00101e21;
  }
  else {
code_r0x00101e21:
    lVar2 = 0;
  }
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
  func_0x001014d0();
  iVar1 = (int)pbVar7;
  bVar5 = *pbVar7;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (bVar5 != 0) {
    if (bVar5 < 0x21) {
      uVar6 = 0x100003e00U >> ((ulong)bVar5 & 0x1f) & 1;
      while (uVar6 != 0) {
        pbVar7 = pbVar7 + 1;
        iVar1 = (int)pbVar7;
        bVar5 = *pbVar7;
        if (bVar5 == 0) goto code_r0x00101ec0;
        if (0x20 < bVar5) break;
        uVar6 = 1 << (bVar5 & 0x3f) & 0x100003e00;
      }
    }
    if ((byte)(bVar5 - 0x30) < 10) {
      func_0x00101650();
    }
  }
code_r0x00101ec0:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  func_0x001014d0();
  if (iVar1 == 2) {
    lVar2 = func_0x001013f0(&UNK_001052f3);
    if (lVar2 == 0) {
      lVar2 = func_0x001013f0(&UNK_00105303);
      if ((lVar2 == 0) || (uVar6 = parse_omp_threads_part_0(lVar2), uVar6 == 0))
      goto code_r0x00102090;
    }
    else {
      uVar6 = 0xffffffffffffffff;
      uVar3 = parse_omp_threads_part_0(lVar2);
      lVar2 = func_0x001013f0(&UNK_00105303);
      if ((lVar2 != 0) && (uVar6 = parse_omp_threads_part_0(lVar2), uVar6 == 0)) {
        uVar6 = 0xffffffffffffffff;
      }
      if (uVar3 != 0) {
        if (uVar6 <= uVar3) {
          uVar3 = uVar6;
        }
        return uVar3;
      }
    }
    uVar3 = num_processors_via_affinity_mask();
  }
  else {
    if (iVar1 != 1) {
      lVar2 = func_0x00101640(0x53);
      if ((lVar2 == 1) && (lVar2 = num_processors_via_affinity_mask(), lVar2 == 0)) {
        return 1;
      }
      if (0 < lVar2) {
        return lVar2;
      }
      return 1;
    }
code_r0x00102090:
    uVar3 = num_processors_via_affinity_mask();
    uVar6 = 0xffffffffffffffff;
  }
  if (uVar3 == 0) {
    uVar4 = func_0x00101640(0x54);
    uVar3 = 1;
    if ((0 < (long)uVar4) && (uVar3 = uVar6, uVar4 <= uVar6)) {
      uVar3 = uVar4;
    }
    return uVar3;
  }
  if (uVar6 < uVar3) {
    uVar3 = uVar6;
  }
  return uVar3;
}

