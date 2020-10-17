
ulong num_processors(int param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 == 2) {
    lVar1 = func_0x001013f0(&UNK_001052f3);
    if (lVar1 == 0) {
      lVar1 = func_0x001013f0(&UNK_00105303);
      if ((lVar1 == 0) || (uVar4 = parse_omp_threads_part_0(lVar1), uVar4 == 0))
      goto code_r0x00102090;
    }
    else {
      uVar4 = 0xffffffffffffffff;
      uVar2 = parse_omp_threads_part_0(lVar1);
      lVar1 = func_0x001013f0(&UNK_00105303);
      if ((lVar1 != 0) && (uVar4 = parse_omp_threads_part_0(lVar1), uVar4 == 0)) {
        uVar4 = 0xffffffffffffffff;
      }
      if (uVar2 != 0) {
        if (uVar4 <= uVar2) {
          uVar2 = uVar4;
        }
        return uVar2;
      }
    }
    uVar2 = num_processors_via_affinity_mask();
  }
  else {
    if (param_1 != 1) {
      lVar1 = func_0x00101640(0x53);
      if ((lVar1 == 1) && (lVar1 = num_processors_via_affinity_mask(), lVar1 == 0)) {
        return 1;
      }
      if (0 < lVar1) {
        return lVar1;
      }
      return 1;
    }
code_r0x00102090:
    uVar2 = num_processors_via_affinity_mask();
    uVar4 = 0xffffffffffffffff;
  }
  if (uVar2 == 0) {
    uVar3 = func_0x00101640(0x54);
    uVar2 = 1;
    if ((0 < (long)uVar3) && (uVar2 = uVar4, uVar3 <= uVar4)) {
      uVar2 = uVar3;
    }
    return uVar2;
  }
  if (uVar4 < uVar2) {
    uVar2 = uVar4;
  }
  return uVar2;
}

