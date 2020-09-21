
undefined8 write_zeros(uint param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((zeros_7570 == (undefined1 *)0x0) &&
     (zeros_7570 = (undefined1 *)func_0x00102910(nz_7571,1), zeros_7570 == (undefined1 *)0x0)) {
    nz_7571 = 0x400;
    zeros_7570 = fallback_7572;
  }
  if (param_2 != 0) {
    do {
      uVar2 = param_2;
      if (nz_7571 <= param_2) {
        uVar2 = nz_7571;
      }
      uVar1 = full_write((ulong)param_1,zeros_7570,uVar2);
      if (uVar1 != uVar2) {
        return 0;
      }
      param_2 = param_2 - uVar1;
    } while (param_2 != 0);
  }
  return 1;
}

