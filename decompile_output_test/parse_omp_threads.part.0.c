
ulong parse_omp_threads_part_0(byte *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  int iVar8;
  long in_FS_OFFSET;
  byte *pbStack24;
  long lStack16;
  
  iVar8 = (int)param_1;
  bVar6 = *param_1;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  if (bVar6 == 0) {
code_r0x00101ebe:
    uVar2 = 0;
  }
  else {
    if (bVar6 < 0x21) {
      uVar7 = 0x100003e00U >> ((ulong)bVar6 & 0x1f) & 1;
      while (uVar7 != 0) {
        param_1 = param_1 + 1;
        iVar8 = (int)param_1;
        bVar6 = *param_1;
        if (bVar6 == 0) goto code_r0x00101ebe;
        if (0x20 < bVar6) break;
        uVar7 = 1 << (bVar6 & 0x3f) & 0x100003e00;
      }
    }
    iVar8 = (int)param_1;
    uVar2 = 0;
    if ((byte)(bVar6 - 0x30) < 10) {
      pbStack24 = (byte *)0x0;
      uVar2 = func_0x00101650(param_1,&pbStack24,10);
      if (pbStack24 == (byte *)0x0) goto code_r0x00101ebe;
      bVar6 = *pbStack24;
      if (bVar6 != 0) {
        iVar1 = iVar8;
        if (bVar6 < 0x21) {
          iVar8 = 0x3e00;
          uVar7 = 0x100003e00U >> ((ulong)bVar6 & 0x1f) & 1;
          while (iVar1 = 0x3e00, uVar7 != 0) {
            pbStack24 = pbStack24 + 1;
            bVar6 = *pbStack24;
            if (bVar6 == 0) goto code_r0x00101ec0;
            if (0x20 < bVar6) break;
            uVar7 = 1 << (bVar6 & 0x3f) & 0x100003e00;
          }
        }
        iVar8 = iVar1;
        if (bVar6 != 0x2c) goto code_r0x00101ebe;
      }
    }
  }
code_r0x00101ec0:
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
  func_0x001014d0();
  if (iVar8 == 2) {
    lVar3 = func_0x001013f0(&UNK_001052f3);
    if (lVar3 == 0) {
      lVar3 = func_0x001013f0(&UNK_00105303);
      if ((lVar3 == 0) || (uVar7 = parse_omp_threads_part_0(lVar3), uVar7 == 0))
      goto code_r0x00102090;
    }
    else {
      uVar7 = 0xffffffffffffffff;
      uVar4 = parse_omp_threads_part_0(lVar3);
      lVar3 = func_0x001013f0(&UNK_00105303);
      if ((lVar3 != 0) && (uVar7 = parse_omp_threads_part_0(lVar3), uVar7 == 0)) {
        uVar7 = 0xffffffffffffffff;
      }
      if (uVar4 != 0) {
        if (uVar7 <= uVar4) {
          uVar4 = uVar7;
        }
        return uVar4;
      }
    }
    uVar4 = num_processors_via_affinity_mask();
  }
  else {
    if (iVar8 != 1) {
      lVar3 = func_0x00101640(0x53);
      if ((lVar3 == 1) && (lVar3 = num_processors_via_affinity_mask(), lVar3 == 0)) {
        return 1;
      }
      if (0 < lVar3) {
        return lVar3;
      }
      return 1;
    }
code_r0x00102090:
    uVar4 = num_processors_via_affinity_mask();
    uVar7 = 0xffffffffffffffff;
  }
  if (uVar4 == 0) {
    uVar5 = func_0x00101640(0x54);
    uVar4 = 1;
    if ((0 < (long)uVar5) && (uVar4 = uVar7, uVar5 <= uVar7)) {
      uVar4 = uVar5;
    }
    return uVar4;
  }
  if (uVar7 < uVar4) {
    uVar4 = uVar7;
  }
  return uVar4;
}

