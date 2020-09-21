
long digits_to_date_time(long param_1)

{
  long lVar1;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  if (((lVar1 == 0) || (*(long *)(param_1 + 0x30) != 0)) || (*(char *)(param_1 + 0xa1) != '\0')) {
    if (4 < in_stack_00000018) {
      *(long *)(param_1 + 0xa8) = lVar1 + 1;
      *(long *)(param_1 + 0x30) = in_stack_00000018 + -4;
      *(long *)(param_1 + 0x40) = in_stack_00000010 % 100;
      *(long *)(param_1 + 0x38) = (in_stack_00000010 / 100) % 100;
      *(long *)(param_1 + 0x28) = in_stack_00000010 / 10000;
      return in_stack_00000010 *
             SUB168(SEXT816(in_stack_00000010) * SEXT816(0x346dc5d63886594b) >> 0x40,0);
    }
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
    if (2 < in_stack_00000018) {
      *(long *)(param_1 + 0x48) = in_stack_00000010 / 100;
      lVar1 = (in_stack_00000010 / 100) * 100;
      *(long *)(param_1 + 0x50) = in_stack_00000010 % 100;
      goto code_r0x001040e8;
    }
  }
  else {
    if ((*(long *)(param_1 + 200) != 0) || (2 < in_stack_00000018)) {
      *(undefined *)(param_1 + 0xd8) = 1;
      *(long *)(param_1 + 0x30) = in_stack_00000018;
      *(undefined4 *)(param_1 + 0x20) = (int)in_stack_00000008;
      *(undefined4 *)(param_1 + 0x24) = (int)((ulong)in_stack_00000008 >> 0x20);
      *(undefined4 *)(param_1 + 0x28) = (int)in_stack_00000010;
      *(undefined4 *)(param_1 + 0x2c) = (int)((ulong)in_stack_00000010 >> 0x20);
      return in_stack_00000018;
    }
    *(undefined8 *)(param_1 + 200) = 1;
  }
  *(long *)(param_1 + 0x48) = in_stack_00000010;
  *(undefined8 *)(param_1 + 0x50) = 0;
code_r0x001040e8:
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 2;
  return lVar1;
}

